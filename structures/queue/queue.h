#ifndef queue_header
#define queue_header
#include "../../utils/node.h"

node* queue_create();
void queue_push(node** root, node* item);
node* queue_pop(node** root);

#endif
