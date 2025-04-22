#include <stdlib.h>
#include <string.h>

void swap(void *vp1, void *vp2, size_t size) {
  void * buffer = malloc(size);
  if (buffer == NULL) {
    return;
  }
  memcpy(buffer, vp1, size);
  memcpy(vp1, vp2, size);
  memcpy(vp2, buffer, size);
  free(buffer);
}
