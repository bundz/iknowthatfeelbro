all: stack

stack:
	gcc -g examples/stack.example.c utils/*.c structures/stack/*.c -o examples/stack_example
