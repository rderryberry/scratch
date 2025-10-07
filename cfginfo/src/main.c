#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "sysconf_info.h"

int main() {
  int* limit_names = rt_limit_name_args();
  printf(" IDX - %18s: LIMIT VALUE\n ", "LIMIT NAME");
  for (int i = 0; i < 38; ++i) {
    printf("-");
  }
  printf("\n");
  for (int i = 0; i < NUM_RT_LIMIT_NAMES; ++i) {
    const char* name = runtime_limit_name(limit_names[i]);
    printf("%4d - %18s: %i\n", limit_names[i], name, sysconf(i));
  }
  return 0;
}
