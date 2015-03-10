#include <stdio.h>
#include "../utils/node.h"
#include "../utils/print.h"
#include "../structures/list/list.h"

struct node {
  int value;
  node* next;
};

void main() {

  node* list = list_create();
  node* aux;

  int i;

  printf("\n\nList example.\n\n");
  printf("Inserting 10 elements ...\n");

  print_structure(list);

  for(i = 0; i < 10; i++) {
    
    aux = node_new(i);
   
    list_insert(&list, aux, i);
  
    print_structure(list);
    
  }

  printf("\nRemoving 10 elements ...\n");

  for(i = 0; i < 10; i++) {
   
    list_remove(&list, 0);
  
    print_structure(list);
    
  }

}
