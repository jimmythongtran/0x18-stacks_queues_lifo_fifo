#include "monty.h"

/**
 *
 *
 *
 */
int main(int argc, char **argv)
{
	FILE *fp;
	char *cmd, *sep_cmd;
	size_t length;
	int gl, data;
	void (*op)(stack_t **stack, unsigned int line_number);
	unsigned int line_number;

	fp = fopen(argv[1], "r");

	if (argc != 2)
	{
		printf("usage: monty file");
		exit(EXIT_FAILURE);
	}

	line_number = 1;
	gl = getline(&cmd, &length, fp);
	while (gl >= 0)
	{
		sep_cmd = strtok(cmd, " \t\n");
		op = get_op_func(sep_cmd);

		if (op == NULL)
		{
			printf("THROW ERROR");
			exit(EXIT_FAILURE);
		}
		sep_cmd = strtok(NULL, " \t\n");
		data = atoi(sep_cmd);
		return (op(data));

		line_number++;
	}
	fclose(fp);
	free(op);
	free(cmd);
	return(0);
}
