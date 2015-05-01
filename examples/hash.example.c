#include <stdio.h>
#include "../structures/hash/hash.h"

struct hash {
  int* array;
  void (*func)(int);
};

struct node {
  int key;
  char data;
  
  node* next;
};

int hash_function(int key) {
  return key % 8;
}

void main() {

  node* aux = hash_node_create(5, 'B');

  hash* _hash = hash_create(10, hash_function);

  _hash->func(10);

}
