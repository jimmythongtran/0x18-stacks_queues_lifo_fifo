#include "monty.c"

/**
 *
 *
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *push_node;

	push_node = add_node(stack, line_number);
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
void pop(stack_t **stack, unsigned int line_number)
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
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t temp;

	if (*stack == NULL)
	{
		return (ERROR and EXIT CODE);
	}
	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

int (*get_op_func(char *s))(stack_t, unsigned int)
{
	instruction_t ops[] = {
		{"push", push},
		{"pop", pop},
		{"pall", pall},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while(i < 3)
	{
		if (s[0] == ops[i].opcode[0])
			return(ops[i].f);
		i++;
	}
	return(0);
}
