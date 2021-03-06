#ifndef stack_header
#define stack_header
#include "../../utils/node.h"

node* stack_create();
void stack_push(node** root, node* item);
node* stack_pop();

#endif
