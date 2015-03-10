#include <stdio.h>
#include "../utils/node.h"
#include "../utils/print.h"
#include "../structures/queue/queue.h"

struct node {
  int value;
  node* next;
};

void main() {

  node* queue = queue_create();
  node* aux;

  int i;

  printf("\n\nQueue example. First in, First out.\n\n");
  printf("Pushing 10 elements ...\n");

  print_structure(queue);

  for(i = 0; i < 10; i++) {
    
    aux = node_new(i);
   
    queue_push(&queue, aux);
  
    print_structure(queue);
    
  }

  printf("\nPoping 10 elements ...\n");

  for(i = 0; i < 10; i++) {
   
    aux = queue_pop(&queue);
  
    print_structure(queue);
    
  }

}
