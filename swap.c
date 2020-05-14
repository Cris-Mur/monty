#include "monty.h"

/**
 * swap - function that swap top node to next
 * @stack: input structure
 * @line_number: line to exec
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1 = NULL, *struc = NULL, *tmp2 = NULL;

	if (stack && *stack && (*stack)->next)
	{
		tmp1 = *stack;
		tmp2 = (*stack)->next;
		struc = (*stack)->next->next;
		tmp1->next = struc;
		tmp1->prev = tmp2;
		tmp2->next = tmp1;
		tmp2->prev = NULL;
		*stack = tmp2;
		return;
	}
	fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
