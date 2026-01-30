#include <proc.h>
#include <elf.h>
#include <fs.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

extern size_t ramdisk_read(void *buf, size_t offset, size_t len);

static uintptr_t mem_translate(PCB *pcb, uintptr_t vaddr) {
  uintptr_t vpn1 = (vaddr >> 22) & 0x3ff;
  uintptr_t pt1_addr = (uintptr_t)pcb->as.ptr;
  uintptr_t pte1_addr = pt1_addr | (vpn1 << 2);
  uintptr_t pte1 = *(uintptr_t *)pte1_addr;

  if (!pte1) return 0;

  uintptr_t vpn0 = (vaddr >> 12) & 0x3ff;
  uintptr_t pt0_addr = (pte1 << 2) & ~0xfff;
  uintptr_t pte0_addr = pt0_addr | (vpn0 << 2);
  uintptr_t pte0 = *(uintptr_t *)pte0_addr;

  if (pte0) {
    // Log("input:0x%08x  return:0x%08x",vaddr, ((pte0 << 2) & ~0xfff) | (vaddr & 0xfff));
    return ((pte0 << 2) & ~0xfff) | (vaddr & 0xfff);
  } else {
    // Log("input:0x%08x  return:0x%08x",vaddr, 0);
    return 0;
  }
}

static uintptr_t loader(PCB *pcb, const char *filename) {
  Elf_Ehdr ehdr;
  int fd = fs_open(filename, 0, 0);
  fs_read(fd, &ehdr, sizeof(ehdr));
  assert((*(uint32_t *)ehdr.e_ident == 0x464c457f));

  pcb->max_brk = 0;

  Elf_Phdr phdr;
  for (int i = 0; i < ehdr.e_phnum; i++) {
    uint32_t base = ehdr.e_phoff + i * ehdr.e_phentsize;
    fs_lseek(fd, base, SEEK_SET);
    fs_read(fd, &phdr, sizeof(Elf_Phdr));
    if (phdr.p_type == PT_LOAD) {
      uintptr_t vaddr_start = ROUNDDOWN(phdr.p_vaddr, PGSIZE);
      uintptr_t vaddr_end = ROUNDUP(phdr.p_vaddr + phdr.p_memsz, PGSIZE);
      pcb->max_brk = pcb->max_brk > vaddr_end ? pcb->max_brk : vaddr_end;

      fs_lseek(fd, phdr.p_offset, SEEK_SET);
      assert(phdr.p_filesz <= phdr.p_memsz);

      for (uintptr_t vaddr = vaddr_start; vaddr < vaddr_end; vaddr += PGSIZE) {
        uintptr_t paddr = mem_translate(pcb, vaddr);
        if (!paddr) {
          paddr = (uintptr_t)new_page(1);
          map(&pcb->as, (void *)vaddr, (void *)paddr, 0);
        }

        uintptr_t off = vaddr < phdr.p_vaddr ? phdr.p_vaddr - vaddr : 0;
        uintptr_t size = PGSIZE - off < phdr.p_filesz ? PGSIZE - off : phdr.p_filesz;
        if (size) {
          fs_read(fd, (void *)(paddr + off), size);
          phdr.p_filesz -= size;
          phdr.p_memsz -= size;
          off += size;
        }

        size = PGSIZE - off < phdr.p_memsz ? PGSIZE - off : phdr.p_memsz;
        if (size) {
          memset((void *)(paddr + off), 0, size);
          phdr.p_memsz -= size;
        }
      }
      assert(phdr.p_filesz == 0);
      assert(phdr.p_memsz == 0);
    }
  }
  fs_close(fd);
  return ehdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", (void*)entry);
  ((void(*)())entry) ();
}

void context_kload(PCB *pcb, void (*entry)(void *), void *arg) {
  Area kstack = { .start = pcb->stack, .end = pcb->stack + sizeof(pcb->stack) };
  pcb->cp = kcontext(kstack, entry, arg);
}


void context_uload(PCB *pcb, const char *filename, char *const argv[], char *const envp[]) {
  // Log("context_uload file: %s", filename);
  int argc = 0, envc = 0, string_len = 0;
  for (; argv[argc]; ++argc) string_len += strlen(argv[argc]) + 1;
  for (; envp[envc]; ++envc) string_len += strlen(envp[envc]) + 1;
  string_len = ROUNDUP(string_len, sizeof(uintptr_t));
  
  protect(&pcb->as);

  void *ustack_top = new_page(8);
  for (void *stack_vaddr = pcb->as.area.end - STACK_SIZE; stack_vaddr < pcb->as.area.end; stack_vaddr += PGSIZE) {
    // Log("vaddr:0x%08x -> paddr:0x%08x", stack_vaddr, ustack_top);
    map(&pcb->as, stack_vaddr, ustack_top, 0);
    ustack_top += PGSIZE;
  }
  char *strtab = (char *)(ustack_top - string_len);
  char **sp = (char **)strtab;
  for (int i = envc; i >= 0; i--) {
    if (envp[i]) {
      strcpy(strtab, envp[i]);
      *--sp = strtab;
      strtab += strlen(envp[i]) + 1; // 加上'\0'的长度
    } else *--sp = NULL;
  }
  for (int i = argc; i >= 0; i--) {
    if (argv[i]) {
      strcpy(strtab, argv[i]);
      *--sp = strtab;
      strtab += strlen(argv[i]) + 1;
    } else *--sp = NULL;
  }
  *(uintptr_t *)--sp = argc;

  Area kstack = { .start = pcb->stack, .end = pcb->stack + sizeof(pcb->stack) };
  uintptr_t entry = loader(pcb, filename);
  Context *ctx = ucontext(&pcb->as, kstack, (void *)entry);
  ctx->GPRx = (uintptr_t)pcb->as.area.end - ((uintptr_t)ustack_top - (uintptr_t)sp);
  // Log("ustack_top=0x%08x, sp=0x%08x, ctx->GPRx=0x%08x", ustack_top, sp, ctx->GPRx);
  pcb->cp = ctx;
}

// |               |
// +---------------+ <---- ustack.end
// |  Unspecified  |
// +---------------+
// |               | <----------+
// |    string     | <--------+ |
// |     area      | <------+ | |
// |               | <----+ | | |
// |               | <--+ | | | |
// +---------------+    | | | | |
// |  Unspecified  |    | | | | |
// +---------------+    | | | | |
// |     NULL      |    | | | | |
// +---------------+    | | | | |
// |    ......     |    | | | | |
// +---------------+    | | | | |
// |    envp[1]    | ---+ | | | |
// +---------------+      | | | |
// |    envp[0]    | -----+ | | |
// +---------------+        | | |
// |     NULL      |        | | |
// +---------------+        | | |
// | argv[argc-1]  | -------+ | |
// +---------------+          | |
// |    ......     |          | |
// +---------------+          | |
// |    argv[1]    | ---------+ |
// +---------------+            |
// |    argv[0]    | -----------+
// +---------------+
// |      argc     |
// +---------------+ <---- cp->GPRx
// |               |
