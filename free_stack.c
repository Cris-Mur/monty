#include "monty.h"

/**
 * free_stack - free all list
 * @head: input doubly linked list
 * Return: void
 */
void free_stack(stack_t *head)
{
	if (head != NULL)
	{
		free_stack(head->next);
		free(head);
	}
}
