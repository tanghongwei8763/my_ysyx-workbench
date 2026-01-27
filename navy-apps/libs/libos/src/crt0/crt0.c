#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
extern void __libc_init_array();
void call_main(uintptr_t *args) {
  __libc_init_array();
  int argc = *args;
  char **argv = (char **)args + 1;
  char **envp = (char **)args + 1 + argc + 1;
  environ = envp;
  exit(main(argc, argv, envp));
  assert(0);
}
