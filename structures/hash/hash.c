#include <stdlib.h>
#include "hash.h"

struct hash {
  int* array;
  void (*func)(int);
};

struct node {
  int key;
  char data;
  
  node* next;
};

node* hash_node_create(int key, char data) {

  node* item = malloc(sizeof(node));
  item->key = key;
  item->data = data;

  return item;

}

hash* hash_create(int size, void* func) {

  hash* _hash = malloc(sizeof(hash));
  _hash->array = malloc(sizeof(node)*size);
  _hash->func = func;

  return _hash;

}

void hash_insert(hash** _hash, node* item);
node* hash_get(hash** root, int key);
void hash_remove(hash** _hash, int key);

