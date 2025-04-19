typedef struct SnekObject snekobject_t;
typedef struct SnekObject {
  char *name;
  snekobject_t *child;
} snekobject_t;


snekobject_t new_node(char *name);

snekobject_t new_node(char *name) {
  snekobject_t node = {
    .name = name,
    .child = NULL
  };
  return node;
}
