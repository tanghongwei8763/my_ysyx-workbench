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

static uintptr_t loader(PCB *pcb, const char *filename) {
  Elf_Ehdr ehdr;
  int fd = fs_open(filename, 0, 0);
  fs_read(fd, &ehdr, sizeof(ehdr));
  assert((*(uint32_t *)ehdr.e_ident == 0x464c457f));

  Elf_Phdr phdr;
  for (int i = 0; i < ehdr.e_phnum; i++) {
    uint32_t base = ehdr.e_phoff + i * ehdr.e_phentsize;
    fs_lseek(fd, base, SEEK_SET);
    fs_read(fd, &phdr, sizeof(Elf_Phdr));
    if (phdr.p_type == PT_LOAD) {
      char * temp = (char *)malloc(phdr.p_filesz);

      fs_lseek(fd, phdr.p_offset, SEEK_SET);
      fs_read(fd, temp, phdr.p_filesz);

      memcpy((void*)phdr.p_vaddr, temp, phdr.p_filesz);
      memset((void*)phdr.p_vaddr + phdr.p_filesz, 0, phdr.p_memsz - phdr.p_filesz);

      free(temp);
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
  
  void *ustack_top = new_page(8);
  char *strtab = (char *)(ustack_top - string_len);
  char **sp = (char **)strtab;
  for (int i = envc; i >= 0; i--) {
    if (envp[i]) {
      strcpy(strtab, envp[i]);
      *--sp = strtab;
      strtab += strlen(envp[i]) + 1; // 加上'\0'的长度
    } else {
      *--sp = NULL;
    }
  }
  for (int i = argc; i >= 0; i--) {
    if (argv[i]) {
      strcpy(strtab, argv[i]);
      *--sp = strtab;
      strtab += strlen(argv[i]) + 1;
    } else {
      *--sp = NULL;
    }
  }
  *(uintptr_t *)--sp = argc;

  uintptr_t entry = loader(pcb, filename);
  Area kstack = { .start = pcb->stack, .end = pcb->stack + sizeof(pcb->stack) };
  Context *ctx = ucontext(NULL, kstack, (void *)entry);
  // Log("ustack_top=0x%08x, sp=0x%08x", ustack_top, sp);
  ctx->GPRx = (uintptr_t)sp;
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
