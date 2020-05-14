#include "monty.h"
g_vars_t var;

/**
 * opfile - handler of a file
 * @path: input path of the file
 * Return: void
 */
void opfile(char *path)
{
	FILE *input;
	char *buffer = NULL;
	size_t num_bytes, l_n;
	char *tok = NULL;
	stack_t *cosito = NULL;

	if (path)
	{
		input = fopen(path, "r");
		if (!input)
		{
			fprintf(stderr, "Error: Can't open file %s\n", path);
			exit(EXIT_FAILURE);
		}
		for (l_n = 1; getline(&buffer, &num_bytes, input) != -1; l_n++)
		{
			tok = strtok(buffer, " \t\n");
			if (tok)
			{
				strcpy(var.cmd, tok);
				while (tok)
				{
					tok = strtok(NULL, " \t\n");
					/*convert*/
					if (tok && !strcmp(var.cmd, "push"))
					{
						valid_dig(tok, l_n);
						break;
					}
				}
				/*select function*/
				selected(&cosito, l_n);
			}
		}
		free(buffer);
		fclose(input);
	}
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
	if (argc > 2 || argc < 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	opfile(argv[1]);
	return (0);
}
