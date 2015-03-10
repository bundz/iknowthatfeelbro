#include <stdio.h>
#include "../utils/node.h"
#include "../utils/print.h"
#include "../structures/stack/stack.h"

struct node {
  int value;
  node* next;
};

void main() {

  node* stack = stack_create();
  node* aux;

  int i;

  print_structure(stack);

  for(i = 0; i < 10; i++) {
    
    aux = node_new(i);
   
    stack_push(&stack, aux);
  
    print_structure(stack);
    
  }

}
