all: stack queue

stack:
	gcc -g examples/stack.example.c utils/*.c structures/stack/*.c -o examples/stack_example

queue:
	gcc -g examples/queue.example.c utils/*.c structures/queue/*.c -o examples/queue_example
