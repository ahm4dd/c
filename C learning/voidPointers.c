typedef enum SnekObjectKind {
  INTEGER,
  FLOAT,
  BOOL,
} snek_object_kind_t;

typedef struct SnekInt {
  char *name;
  int value;
} snek_int_t;

typedef struct SnekFloat {
  char *name;
  float value;
} snek_float_t;

typedef struct SnekBool {
  char *name;
  unsigned int value;
} snek_bool_t;

void snek_zero_out(void *ptr, snek_object_kind_t kind);

void snek_zero_out(void *ptr, snek_object_kind_t kind){
  switch (kind) {
    case INTEGER:
      ((snek_int_t*)ptr)->value = 0;
      break;
    case FLOAT:
      ((snek_float_t*)ptr)-> value = (float)0;
      break;
    case BOOL:
      ((snek_bool_t*)ptr)-> value = 0;
      break;
    default:
      return;
  }
}
