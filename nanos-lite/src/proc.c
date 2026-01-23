#include <proc.h>

#define MAX_NR_PROC 4

static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;
extern void naive_uload(PCB *pcb, const char *filename);
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
  switch_boot_pcb();

  Log("Initializing processes...");
  // load program here
  naive_uload(NULL, "/bin/menu");

}

Context* schedule(Context *prev) {
  return NULL;
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
