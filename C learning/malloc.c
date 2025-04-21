#include <stdio.h>
#include <stdlib.h>
int *allocate_scalar_array(int size, int multiplier) {
  int * scalar_array = malloc(size * sizeof(int));
  if (scalar_array == NULL) {
    return NULL;
  }
  for (int i = 0; i < size; i++) {
    scalar_array[i] = i * multiplier;
  }
  return scalar_array;
}
