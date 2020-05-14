#include "monty.h"
/**
 * hand_opt - Function
 * @head: pointer to struct type stack_t
 * @token: option for use
 * @line_num: line number from file
 */
void hand_opt(stack_t **head, char *token, unsigned int line_num)
{
	int opt_num = 0;
	instruction_t opt[] = {{"push", push}, {"pall", pall}, {"pint", pint},
		{"pop", pop}, {"swap", swap}, {"add", add}, {"nop", nop}, {NULL, NULL}};

	for (; opt_num < 7; opt_num++)
		if (strcmp(token, opt[opt_num].opcode) == 0)
		{
			printf("match line# %u ** %s\n", line_num, token);
//			opt[opt_num].f(head, line_num);
		}
}
