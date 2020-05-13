#include "monty.h"

g_vars_t var;

void push_ERR(size_t l_n)
{
	fprintf(stderr, "L<%lu>: usage: push integer\n", l_n);
	exit (EXIT_FAILURE);
}

/**
 * main - function that execute a monty program that run the bytecodes line by
 * line from a  File.m
 * @argc: number of arguments
 * @argv: name file
 * Return: 0 Success, if the number is different is error
 */

int main(int argc, char *argv[])
{
	FILE *input;
	char *buffer = NULL;
	size_t num_bytes, l_n;
	char *tok = NULL;
	stack_t *cosito = NULL;

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
			while(tok)
			{
				tok = strtok(NULL, " \t\n");
				/*convert*/
				if (tok)
				{
					if (isdigit(tok[0]))
						var.psh_dat = atoi(tok);
					else if(strcmp(tok, "push"))
					{
						push_ERR(l_n);
					}
				}

			}
			/*select function*/
			selected(&cosito, l_n);
		}
		free(buffer);
		fclose(input);
	}
	return 0;
}
