#include <stdlib.h>
#include "node.h"

struct node {
  int value;
  node* next;
};

node* node_new(int value) {
  
  node* new = malloc(sizeof(node));
  new->value = value;
  new->next = NULL;

  return new;

}
