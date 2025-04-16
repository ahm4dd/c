#include <stdio.h>
void print_numbers_reverse(int start, int end) {
  int i = start;
  printf("%d\n", i);
  while (i != end) {
    i--;
    printf("%d\n", i);
  }
}
