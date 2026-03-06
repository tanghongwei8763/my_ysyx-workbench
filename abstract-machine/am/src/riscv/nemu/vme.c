#include <am.h>
#include <nemu.h>
#include <klib.h>

static AddrSpace kas = {};
static void* (*pgalloc_usr)(int) = NULL;
static void (*pgfree_usr)(void*) = NULL;
static int vme_enable = 0;

static Area segments[] = {      // Kernel memory mappings
  NEMU_PADDR_SPACE
};

#define USER_SPACE RANGE(0x40000000, 0x80000000)

static inline void set_satp(void *pdir) {
  uintptr_t mode = 1ul << (__riscv_xlen - 1);
  asm volatile("csrw satp, %0" : : "r"(mode | ((uintptr_t)pdir >> 12)));
}

static inline uintptr_t get_satp() {
  uintptr_t satp;
  asm volatile("csrr %0, satp" : "=r"(satp));
  return satp << 12;
}

bool vme_init(void* (*pgalloc_f)(int), void (*pgfree_f)(void*)) {
  pgalloc_usr = pgalloc_f;
  pgfree_usr = pgfree_f;

  kas.ptr = pgalloc_f(PGSIZE);

  int i;
  for (i = 0; i < LENGTH(segments); i ++) {
    void *va = segments[i].start;
    for (; va < segments[i].end; va += PGSIZE) {
      map(&kas, va, va, 0);
    }
  }

  set_satp(kas.ptr);
  vme_enable = 1;

  return true;
}

void protect(AddrSpace *as) {
  PTE *updir = (PTE*)(pgalloc_usr(PGSIZE));
  as->ptr = updir;
  as->area = USER_SPACE;
  as->pgsize = PGSIZE;
  // map kernel space
  memcpy(updir, kas.ptr, PGSIZE);
}

void unprotect(AddrSpace *as) {
}

void __am_get_cur_as(Context *c) {
  c->pdir = (vme_enable && c->pdir != NULL ? (void *)get_satp() : NULL);
}

void __am_switch(Context *c) {
  if (vme_enable && c->pdir != NULL) {
    set_satp(c->pdir);
  }
}

void map(AddrSpace *as, void *va, void *pa, int prot) {
  //  VPN1(9位) | VPN0(9位) | 页内偏移(12位)
  uintptr_t vpn1 = ((uintptr_t)va >> 22) & 0x3ff;
  uintptr_t vpn0 = ((uintptr_t)va >> 12) & 0x3ff;
  uintptr_t pt1, pt0;

  pt1 = (uintptr_t)as->ptr;
  assert((pt1 & 0xfff) == 0);

  uintptr_t *pte1 = (uintptr_t *)(pt1 | (vpn1 << 2));
  // printf("ptel=0x%08x->0x%08x, pt1=0x%08x, vpn1=0x%08x\n", pte1, *pte1, pt1, vpn1);

  if ((*pte1 & 1) == 0) {
    pt0 = (uintptr_t)pgalloc_usr(PGSIZE);
    *pte1 = (pt0 >> 2) | 1;
    // printf("!!!!!!ptel=0x%08x->0x%08x, pt1=0x%08x, vpn1=0x%08x\n", pte1, *pte1, pt1, vpn1);
  } else {
    pt0 = (*pte1 << 2) & ~0xfff;
  }
  assert((pt0 & 0xfff) == 0);

  uintptr_t *pte0 = (uintptr_t *)(pt0 | (vpn0 << 2));
  *pte0 = (((uintptr_t)pa >> 2) & ~0x3ff) | 0xf;
  // printf("*pte0=0x%08x\n", *pte0);
}

Context *ucontext(AddrSpace *as, Area kstack, void *entry) {
  Context *cp = (Context *)(kstack.end - sizeof(Context));
  cp->mepc = (uintptr_t)entry;
  cp->mstatus = 0x1880;
  cp->pdir = as->ptr;
  return cp;
}
