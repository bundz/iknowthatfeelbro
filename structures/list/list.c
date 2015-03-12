#include <stdio.h>
#include <stdlib.h>
#include "../../utils/node.h"
#include "list.h"

struct node {
  int value;
  node* next;
};

node* list_create() {
  node* root = NULL;

  return root;
}

void list_insert(node** root, node* item, int pos) {

  node* aux = list_get(root, pos - 1);
  node* aux2;

  if(*root == NULL && pos == 0) {
    *root = item;
    return;
  }

  if(aux != NULL) {

    aux2 = aux->next;
    aux->next = item;
    item->next = aux2;
    return;

  }
  
  printf("\nPosition out of list size.\n");
  return;
}

node* list_get(node** root, int pos) {

  node* aux = *root;
  int i = 0;

  while(aux && i != pos) {
    aux = aux->next;
    i++;
  }

  if(aux != NULL && i == pos) {
    return aux;
  }
  
  return NULL;

}

void list_remove(node** root, int pos) {

  node* aux;
  node* aux2;

  if(pos == 0 && *root != NULL ) {
    aux = *root;
    *root = aux->next;
    free(aux);
    return;
  }  

  aux = list_get(root, pos - 1);

  if(aux != NULL && aux->next != NULL) {
    aux2 = aux->next;
    aux->next = aux->next->next;
    free(aux2);
    return;
  }

  printf("\nPosition out of list size.\n");
  return;

}
