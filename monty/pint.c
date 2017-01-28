#include "monty.h"

/**
 *
 *
 *
 *
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *top;

	top = *stack;
	if (!top)
		printf("L%d: can't pint, stack empty\n", line_number);
	while (top != NULL)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}
