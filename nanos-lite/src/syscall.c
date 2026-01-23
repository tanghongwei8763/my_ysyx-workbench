#include <common.h>
#include <syscall.h>
#include <sys/time.h>
#include <fs.h>
#include <proc.h>
#include <memory.h>
extern void naive_uload(PCB *pcb, const char *filename);

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    case SYS_exit: 
      // Log("SYSCALL: exit"); 
      if(a[1]) halt(a[1]); 
      naive_uload(NULL, "/bin/nterm");
      break;
    case SYS_yield: 
      // Log("SYSCALL: yield");
      yield(); 
      c->GPRx = 0; 
      break;
    case SYS_open: 
      // Log("SYSCALL: open"); 
      c->GPRx = fs_open((const char *)a[1], a[2], a[3]); 
      break;
    case SYS_read: 
      // Log("SYSCALL: read"); 
      c->GPRx = fs_read(a[1], (void *)a[2], a[3]); 
      break;
    case SYS_write: 
      // Log("SYSCALL: write"); 
      c->GPRx = fs_write(a[1], (const void *)a[2], a[3]); 
      break;
    case SYS_close: 
      // Log("SYSCALL: close"); 
      c->GPRx = fs_close(a[1]); 
      break;
    case SYS_lseek: 
      // Log("SYSCALL: lseek"); 
      c->GPRx = fs_lseek(a[1], a[2], a[3]); 
      break;
    case SYS_brk:
      // Log("SYSCALL: brk");
      c->GPRx = mm_brk(a[1]);  
      break;
    case SYS_execve:
      // Log("SYSCALL: SYS_execve");
      c->GPRx = 0;
      naive_uload(NULL, (const char *)a[1]);
      break;
    case SYS_gettimeofday:
      // Log("SYSCALL: gettimeofday"); 
      c->GPRx = fgettimeofday((struct timeval*)a[1], (struct timezone*)a[2]);
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}

