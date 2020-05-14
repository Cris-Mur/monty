#include "monty.h"
/**
 * valid_tok - Function that valided a name option
 * @str_tok: string for validate
 * @line_num: line number from file
 * Return: 0 Succes or exit EXIT_FAILURE
 */
int valid_tok(char *token, int line_num)
{
	char list_opt[][8] = {
		"push", "pall", "pint",
		"pop", "swap", "add", "nop",
		"sub", "mul", "div", "mod", "pchar"};
	int i = 0;

	for (; i < 13; i++)
		if (strcmp(token, list_opt[i]) == 0 || token[0] == '#')
			break;
	if (i == 13)
	{
		fprintf(stderr, "L<%d>: unknown instruction <%s>\n", line_num, token);
		exit(EXIT_FAILURE);
	}
	return (0);
}
