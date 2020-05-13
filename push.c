#include "monty.h"

/**
 * push - funtion that push new node into stack
 * @
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;

	(void)line_number;
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = var.psh_dat;
	new->next = *stack;
	if (*stack)
		(*stack)->prev = new;
	*stack = new;
}
