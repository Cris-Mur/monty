#include "monty.h"

/**
 * pint - print top value
 * @stack: input structure
 * @line_number: line of the execution
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack && *stack)
	{
		if ((*stack)->n > 31 && (*stack)->n < 127)
		{
			printf("%d\n", (*stack)->n);
			return;
		}
		fprintf(stderr, "L%u: can't pchar, value out of range\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
