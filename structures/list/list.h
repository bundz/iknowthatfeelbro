#ifndef list_header
#define list_header
#include "../../utils/node.h"

node* list_create();
void list_insert(node** root, node* item, int pos);
node* list_get(node** root, int pos);
void list_remove(node** root, int pos);

#endif
