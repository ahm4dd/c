typedef struct {
  size_t length;
  char buffer[64];
} TextBuffer;

int smart_append(TextBuffer* dest, const char* src) {
  if (dest == NULL || src == NULL) {
    return 1;
  }
  const int max_buffer_size = 64;
  size_t src_len = strlen(src);
  size_t available_space = max_buffer_size - dest->length - 1;
  if (src_len > available_space) {
    strncat(dest->buffer, src, available_space);
    dest->length = max_buffer_size - 1;
    return 1;
  }
  strcat(dest->buffer, src);
  dest->length += src_len;
  return 0;
}
