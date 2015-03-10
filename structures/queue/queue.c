#include <stdio.h>
#include "../../utils/node.h"

struct node {
  int value;
  node* next;
};

node* queue_create() {

  node* root = NULL;

  return root;

}  

void queue_push(node** root, node* item) {
  
  node* aux = *root;

  if(aux == NULL) {
    *root = item;
    return;
  }

  while(aux->next) {

    aux = aux->next;

  }

  aux->next = item;
}

node* queue_pop(node** root) {

  node* aux = *root;

  if(aux) {

    *root = aux->next;
    return aux;

  } 

  else {

    return NULL;

  }

}
