#include <stdio.h>
#include "../../utils/node.h"

struct node {
  int value;
  node* next;
};

node* stack_create() {

  node* root = NULL;

  return root;

}  

void stack_push(node** root, node* item) {
  
  node* aux = *root;

  *root = item;

  item->next = aux;
  
}

node* stack_pop(node** root) {

  node* aux = *root;

  if(aux) {

    *root = aux->next;
    return aux;

  } 

  else {

    return NULL;

  }

}
