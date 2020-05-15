#include "monty.h"

/**
 * mod_ - funtion that add value into top and next to
 * @stack: input structure
 * @line_number: line of the exec
 * Return: void
 */
void mod_(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (stack && *stack && (*stack)->next)
	{
		tmp = *stack;
		if (tmp->n != 0)
		{
			tmp->next->n = tmp->next->n % tmp->n;
			pop(stack, line_number);
			return;
		}
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
