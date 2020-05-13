#include "monty.h"

/**
 * main - function that execute a monty program that run the bytecodes line by
 * line from a  File.m
 * @argc: number of arguments
 * @argv: name file
 * Return: 0 Success, if the number is different is error
 */
g_vars_t var;

int main(int argc, char *argv[])
{
	FILE *input;
	char *buffer = NULL;
	size_t num_bytes, l_n;
	char *tok = NULL;

	if (argc > 2 || argc < 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	if (argv[1])
	{
		input = fopen(argv[1], "r");
		if (!input)
		{
			fprintf(stderr,"Error: Can't open file %s\n", argv[1]);
			exit (EXIT_FAILURE);
		}
		for (l_n = 1; getline(&buffer, &num_bytes, input) != -1; l_n++)
		{
			tok = strtok(buffer, " \t\n");
			strcpy(var.cmd, tok);
			printf("Line %lu: cmd: %s\n", l_n, var.cmd);
			while(tok)
			{
				tok = strtok(NULL, " \t\n");
				/*convert*/
				if (tok && isdigit(tok[0]))
				{
					var.psh_dat = atoi(tok);
					printf("Line %lu: psh_dat: %d\n", l_n, var.psh_dat);
				}
			}
			/*select function*/
		}
		free(buffer);
		fclose(input);
	}
	return 0;
}
