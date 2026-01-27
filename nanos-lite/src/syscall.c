#include <common.h>
#include <syscall.h>
#include <sys/time.h>
#include <fs.h>
#include <proc.h>
#include <memory.h>
extern void naive_uload(PCB *pcb, const char *filename);
extern void context_uload(PCB *pcb, const char *filename, char *const argv[], char *const envp[]);

int execve(PCB *pcb, const char *filename, char *const argv[], char *const envp[]) {
  int fd = fs_open(filename, 0, 0);
  if(fd == -1) return -2;
  context_uload(pcb, filename, argv, envp);
  switch_boot_pcb();
  yield();
  return 0;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    case SYS_exit: 
      // Log("SYSCALL: exit"); 
      if(a[1]) Log("this exe hit bad tarp"); 
      char *const argv[] = {NULL};
      char *const envp[] = {NULL};
      c->GPRx = execve(current, "/bin/nterm", argv, envp);
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
      // Log("SYSCALL: SYS_execve  filename:%s", (char*)a[1]);
      c->GPRx = execve(current, (char *)a[1], (char *const *)a[2], (char *const *)a[3]);
      break;
    case SYS_gettimeofday:
      // Log("SYSCALL: gettimeofday"); 
      c->GPRx = fgettimeofday((struct timeval*)a[1], (struct timezone*)a[2]);
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}

