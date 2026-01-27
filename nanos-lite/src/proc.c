#include <proc.h>

#define MAX_NR_PROC 4

static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;
extern void naive_uload(PCB *pcb, const char *filename);
extern void context_kload(PCB *pcb, void (*entry)(void *), void *arg);
extern void context_uload(PCB *pcb, const char *filename, char *const argv[], char *const envp[]);
void switch_boot_pcb() {
  current = &pcb_boot;
}

void hello_fun(void *arg) {
  int j = 1;
  while (1) {
    Log("Hello World from Nanos-lite with arg '%p' for the %dth time!", (uintptr_t)arg, j);
    j ++;
    yield();
  }
}

void init_proc() {
  char *const argv[] = {NULL};
  char *const envp[] = {NULL};
  context_kload(&pcb[0], hello_fun, (void*)1L);
  context_uload(&pcb[1], "/bin/nterm", argv, envp);
  switch_boot_pcb();

  Log("Initializing processes...");
  // load program here
  // naive_uload(NULL, "/bin/pal");

}

Context* schedule(Context *prev) {
  current->cp = prev;
  current = (current == &pcb[0] ? &pcb[1] : &pcb[0]);
  return current->cp;
}

int fgettimeofday(struct timeval *tv, struct timezone *tz){
  if (tv) {
    uint64_t us = io_read(AM_TIMER_UPTIME).us;
    tv->tv_sec = us >> 32;
    tv->tv_usec = us;
  }
  if (tz != NULL)
  {
    tz->tz_minuteswest = 0;
    tz->tz_dsttime     = 0;
  }
  return 0;
}
