#include "monty.c"

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

/**
 *
 *
 *
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		printf("ERROR and EXIT CODE");
		exit();
	}
	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

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

/**
 *
 *
 *
 *
 *
 */
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
