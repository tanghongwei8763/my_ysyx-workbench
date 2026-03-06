#include <common.h>
#include <syscall.h>
#include <proc.h>

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD  : 
      // Log("event: YIELD"); 
      c = schedule(c);
      break;
    case EVENT_SYSCALL: 
      // Log("event: EVENT_SYSCALL"); 
      do_syscall(c); 
      break;
    case EVENT_IRQ_TIMER:
      // Log("event: EVENT_IRQ_TIMER"); 
      c = schedule(c);
      break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  assert(c != NULL);
  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
