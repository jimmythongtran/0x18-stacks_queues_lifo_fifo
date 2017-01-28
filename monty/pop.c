#include "monty.h"

/**
 *
 *
 *
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *ret_node;

	if (*stack == NULL)
		return (NULL);

	ret_node = *top;
	*top = (*top)->next;
	*top->prev = NULL;

	free(ret_node);
}
