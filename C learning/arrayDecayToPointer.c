#include <stdio.h>

/*
When Arrays Don't Decay
sizeof Operator: Returns the size of the entire array (e.g., sizeof(arr)), not just the size of a pointer.
& Operator Taking the address of an array with &arr gives you a pointer to the whole array, not just the first element. The type of &arr is a pointer to the array type, e.g., int (*)[5] for an int array with 5 elements.
Initialization: When an array is declared and initialized, it is fully allocated in memory and does not decay to a pointer.
*/

void core_utils_func(int core_utilization[]) {
  printf("sizeof core_utilization in core_utils_func: %d\n", sizeof(core_utilization));
}


int main() {
  int core_utilization[] = {43, 67, 89, 92, 71, 43, 56, 12};
  int len = sizeof(core_utilization) / sizeof(core_utilization[0]);
  printf("sizeof core_utilization in main: %zu\n", sizeof(core_utilization));
  printf("len of core_utilization: %d\n", len);
  core_utils_func(core_utilization);
  return 0;
}
