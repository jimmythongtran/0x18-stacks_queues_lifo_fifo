#include "monty.c"

/**
 *
 *
 *
 */
void push(stack_t **stack, int data_elem)
{
	stack_t *push_node;

	push_node = add_node(stack, data_elem);
	if (push_node == NULL)
	{
		printf(PRINT ERROR AND EXIT STATUS);
	}
}

/**
 *
 *
 *
 */
void pop(stack_t **stack)
{}

/**
 *
 *
 *
 */
void pall(stack_t **stack)
{}
