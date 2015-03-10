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

  printf("\n\nStack example. Last in, First out.\n\n");
  printf("Pushing 10 elements ...\n");

  print_structure(stack);

  for(i = 0; i < 10; i++) {
    
    aux = node_new(i);
   
    stack_push(&stack, aux);
  
    print_structure(stack);
    
  }

  printf("\nPoping 10 elements ...\n");

  for(i = 0; i < 10; i++) {
   
    aux = stack_pop(&stack);
  
    print_structure(stack);
    
  }

}
