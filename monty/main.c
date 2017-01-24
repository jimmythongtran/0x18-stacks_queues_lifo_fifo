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
	int (*o)(int);

	fp = fopen(argv[1], "r");
	gl = getline(&cmd, &length, fp);

	if (argc != 2)
	{
		printf("usage: monty file");
		exit(EXIT_FAILURE);
	}

	while (gl >= 0)
	{
		sep_cmd = strtok(cmd, " ");
		op = get_op_func(sep_cmd);
		if (op == NULL)
		{
			(THROW ERROR);
		}
		sep_cmd = strtok(NULL, " ");
		data = atoi(sep_cmd = strtok(NULL, " "));
		return (op(sep_cmd));
	}
	fclose(fp);
	free();
	return(0);
}
