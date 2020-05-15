#include "monty.h"

/**
 * sub_ - funtion that add value into top and next to
 * @stack: input structure
 * @line_number: line of the exec
 * Return: void
 */
void sub_(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (stack && *stack && (*stack)->next)
	{
		tmp = *stack;
		tmp->next->n = tmp->n - tmp->next->n;
		pop(stack, line_number);
		return;
	}
	fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
