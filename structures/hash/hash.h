#ifndef hash_header
#define hash_header

typedef struct hash hash;
typedef struct node node;

node* hash_node_create(int key, char data);
hash* hash_create(int size, void* func);
void hash_insert(hash** _hash, node* item);
node* hash_get(hash** _hash, int key);
void hash_remove(hash** _hash, int key);

#endif
