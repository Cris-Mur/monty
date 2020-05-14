#include "monty.h"

/**
 * valid_dig - check number for push func
 * @tok: input string tokenized
 * @l_n: input line number
 * Return: void
 */
void valid_dig(char *tok, size_t l_n)
{
	if (tok[0] == '-' && isdigit(tok[1]))
		var.psh_dat = atoi(tok);
	else if (strcmp(tok, "push"))
		push_ERR(l_n);
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
