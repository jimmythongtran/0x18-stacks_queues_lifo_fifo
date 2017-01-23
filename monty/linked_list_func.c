#include "monty.h"

/**
 *
 *
 *
 */
stack_t add_node(stack_t **top, int data_elem)
{
	stack *newnode;

	if (*top == NULL)
		return (NULL);

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = data_elem;
	newnode->prev = NULL;
	newnode->next = *top;

	if (*top != NULL)
		(*top)->prev = newnode;

	*top = newnode;
	return(newnode);
}

/**
 *
 *
 *
 */
stack_t *ret_top(stack_t **top)
{
	stack_t *ret_node;

	if (*top == NULL)
		return (NULL);

	ret_node = *top;
	*top = (*top)->next;
	*top->prev = NULL;

	free(ret_node);
	return(ret_node);
}
