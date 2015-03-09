#include <stdio.h>
#include "print.h"
#include "node.h"

struct node {
  int value;
  node* next;
};

void print_structure(node* root) {
  
  node* aux = root;

  printf("[");

  while(aux) {
    
    printf("%d", aux->value);
    
    if(aux->next) {
      printf(", ");
    }

    aux = aux->next;
    
  }

  printf("]\n");

}
