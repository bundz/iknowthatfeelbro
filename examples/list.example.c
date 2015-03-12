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

  printf("\nGetting 10 elements ...\n");

   for(i = 0; i < 10; i++) {
    
    aux = list_get(&list, i);
   
    printf("Element with index: %d has value: %d\n", i, aux->value);
   
  }

  printf("\nRemoving 5 elements ...\n");

  printf("Removing index 7 element ...\n"); 
  list_remove(&list, 7); 
  print_structure(list);

  printf("Removing index 2 element ...\n"); 
  list_remove(&list, 2); 
  print_structure(list);

  printf("Removing index 5 element ...\n"); 
  list_remove(&list, 5); 
  print_structure(list);

  printf("Removing index 3 element ...\n"); 
  list_remove(&list, 3); 
  print_structure(list);

  printf("Removing index 0 element ...\n"); 
  list_remove(&list, 3); 
  print_structure(list);

}
