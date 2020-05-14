#include "monty.h"

/**
 * pall - print all structure
 * @stack: input struture
 * @line_number: input line of excecution
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	(void)line_number;
	if (stack && *stack)
	{
		tmp = *stack;
		while (tmp)
		{
			printf("%d\n", tmp->n);
			tmp = tmp->next;
		}
	}
}
