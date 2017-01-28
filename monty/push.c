#include "monty.h"

/**
 *
 *
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack *newnode;

	if (*stack == NULL)
		return (NULL);

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = ***DATA***;
	newnode->prev = NULL;
	newnode->next = *top;

	if (*top == NULL)
		*top = newnode;
	else:
		(*top)->prev = newnode;
	*top = newnode;
	return(newnode);
}
