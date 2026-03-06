#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;
void __am_get_cur_as(Context *c);
void __am_switch(Context *c);

Context* __am_irq_handle(Context *c) {
  //for (int i=0; i<32; i++){
  //  printf("r[%d] = %d\n", i, c->gpr[i]);
  //}
  //printf("mepc = %d, mcause = %d, mstatus = %d\n", c->mepc, c->mcause, c->mstatus);
  // printf("c->gpr[17] = %d\n", c->gpr[17]);
  __am_get_cur_as(c);
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 0xb: 
        c->mepc += 4;
        if(c->gpr[17] == 1) {
          ev.event = EVENT_YIELD; 
        }
        else {
          ev.event = EVENT_SYSCALL;
        }
        break;
      case 0x80000007: ev.event = EVENT_IRQ_TIMER; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  __am_switch(c);
  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *cp = (Context *)(kstack.end - sizeof(Context));
  cp->mepc = (uintptr_t)entry;
  cp->mstatus = 0x1880;
  cp->gpr[10] = (uintptr_t)(arg);
  cp->pdir = NULL;
  return cp;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, 1; ecall");
#else
  asm volatile("li a7, 1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
