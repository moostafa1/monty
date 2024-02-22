#include "monty.h"

/**
 * print_stack - Prints the stack
 * @stack: Pointer to the top of the stack
 */
void print_stack(const stack_t *stack)
{
	const stack_t *current = stack;

	printf("Stack: ");
	while (current != NULL)
	{
		printf("%d ", current->n);
		current = current->prev;
	}
	printf("\n");
}


int main(void)
{
	stack_t *stack = NULL;

	push(&stack, 1);
	push(&stack, 2);
	printf("After push 2: ");
	print_stack(stack);

	swap(&stack, 3);
	printf("After swap: ");
	print_stack(stack);

	add(&stack, 4);
	printf("After add: ");
	print_stack(stack);

	pop(&stack, 5);
	printf("After pop: ");
	print_stack(stack);

	nop(&stack, 6);
	printf("After nop: ");
	print_stack(stack);

    return 0;
}
