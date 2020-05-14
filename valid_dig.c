#include "monty.h"
/**
 * valid_dig - Function that validate a string, seeking a number
 * @str: String
 * @line_num:
 * Return: Convert a str number an integer
 */
int valid_dig(char *str, int line_num)
{
	int i;
	int num;

	for (i = 0; str[i] != '\0'; i++)
		if (isdigit(str[i]) == 0 && str[i] != 48 && str[i] != '-')
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_num, str);
			exit(EXIT_FAILURE);
		}
	num = atoi(str);
	return (num);
}
