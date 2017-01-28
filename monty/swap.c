#include "monty.h"

/**
 *
 *
 *
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || ((*stack)->next == NULL))
	{
		printf("L%d: can't swap, stack too short");
		exit();
	}

	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
