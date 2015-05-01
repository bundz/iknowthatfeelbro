all: stack queue list hash

stack:
	gcc -g examples/stack.example.c utils/*.c structures/stack/*.c -o examples/stack_example

queue:
	gcc -g examples/queue.example.c utils/*.c structures/queue/*.c -o examples/queue_example

list:
	gcc -g examples/list.example.c utils/*.c structures/list/*.c -o examples/list_example

hash:
	gcc -g examples/hash.example.c structures/hash/*.c -o examples/hash_example


