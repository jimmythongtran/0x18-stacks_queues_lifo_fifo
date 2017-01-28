#include "monty.h"

/**
 *
 *
 *
 */
int main(int argc, char **argv)
{
	FILE *fp;
	char *cmd, *sep_cmd, *file;
	size_t length;
	int gl, data;

	file = argv[1];
	fp = fopen(file, "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);

	if (argc != 2)
	{
		printf("usage: monty file");
		exit(EXIT_FAILURE);
	}

	gl = getline(&cmd, &length, fp);
	while (gl >= 0)
	{
		sep_cmd = strtok(cmd, " \t\n");
		while (sep_cmd != NULL)
		{
			printf("%s", sep_cmd);
			sep_cmd = strtok(NULL, " \t\n");
		}
		data = atoi(sep_cmd);
		printf("%d", data);

	}
	fclose(fp);
	return(0);
}
