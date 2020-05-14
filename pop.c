#include "monty.h"

/**
 * pop - function that pop node of the structure
 * @stack: input structure
 * @line_number: input exec line
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (stack && *stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
		return;
	}
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}
