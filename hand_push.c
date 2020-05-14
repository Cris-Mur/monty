#include "monty.h"

/**
 * valid_dig - check number for push func
 * @tok: input string tokenized
 * @l_n: input line number
 * Return: void
 */
void valid_dig(char *tok, size_t l_n)
{
	int i;

	for (i = 0; tok[i] != '\0'; i++)
		if (isdigit(tok[i]) == 0 && tok[i] != 48 && tok[i] != '-')
			push_ERR(l_n);
	var.psh_dat = atoi(tok);
}

/**
 * push_ERR - print error of push
 * @l_n: input line of error in the bytecode
 * Return: void
 */
void push_ERR(size_t l_n)
{
	fprintf(stderr, "L<%lu>: usage: push integer\n", l_n);
	exit(EXIT_FAILURE);
}
