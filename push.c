#include "monty.h"

/**
 * push - funtion that push new node into stack
 * @stack: input structure
 * @line_number: line exec function
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;

	new = malloc(sizeof(stack_t));
	(void)line_number;
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
