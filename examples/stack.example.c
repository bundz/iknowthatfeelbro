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

  for(i = 0; i < 10; i++) {
    
    aux = node_new(i);
    
    if(stack == NULL) {
      printf("NULL\n");
    }
   
    print_structure(stack);

    stack_push(stack, aux);   
  
  }

}
