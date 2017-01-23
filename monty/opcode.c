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
void pall(stack_t **stack, int line_num)
{
	
}

/**
 *
 *
 *
 */
void pop(stack_t **stack, int line_num)
{
	stack_t *pop_node;

	pop_node = ret_top(stack);
	if (pop_node == NULL)
		return (ERROR and EXIT CODE);

	free(pop_node);
}

/**
 *
 *
 *
 */
void pall(stack_t **stack)
{
	stack_t temp;

	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
