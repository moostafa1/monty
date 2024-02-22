#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number in the file.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top1, *top2;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	top1 = *stack;
	top2 = (*stack)->next;

	/* Adjust top1's pointers */
	top1->next = top2->next;
	if (top2->next)
		top2->next->prev = top1;
	top1->prev = top2;

	/* Adjust top2's pointers */
	top2->prev = NULL;
	top2->next = top1;

	*stack = top2;
}
