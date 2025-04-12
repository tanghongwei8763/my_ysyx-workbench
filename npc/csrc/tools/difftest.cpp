#include <dlfcn.h>
#include "../include/commen.h"
#include "../include/switch.h"
#include "../include/difftest-def.h"
#include "../include/memory.h"
#include "../include/reg.h"

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

uint32_t ref_r[33];

void ref_reg_display(uint32_t *ref) {
    for(int i = 0; i < 33; i++) {
        printf("------NO[%d]: 0x%x\n", i, *(ref + i));
    }
}

#ifdef CONFIG_DIFFTEST

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(paddr_t addr, void *buf, size_t n, bool direction))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *dut, bool direction))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t n))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t NO))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  printf("\x1B[34mDifferential testing: \x1B[1m\x1B[32mON\x1B[0m\n");
  printf("\x1B[34mThe result of every instruction will be compared with \x1B[1m\x1B[33m%s\x1B[0m. "
           "This will help you a lot for debugging, but also significantly reduce the performance. "
           "If it is not necessary, you can turn it off in menuconfig.\n\x1B[0m", ref_so_file);

  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(dut.regs, DIFFTEST_TO_REF);
}

static void checkregs(uint32_t *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    NPC_STATE = NPC_ABORT;
    isa_reg_display();
    printf("--------ref regs-------\n");
    ref_reg_display(ref);
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {

  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  if (ref_r[33] != npc) {
    checkregs(ref_r, npc);
    return;
  }

  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  checkregs(ref_r, pc);
}
#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
#endif
