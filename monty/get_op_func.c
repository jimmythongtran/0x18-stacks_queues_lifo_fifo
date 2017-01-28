#include "monty.h"

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
