#include "monty.h"

/**
 * selected - fuction that select function for opcode
 * @stack: input structure
 * @line_number: exec line_number
 * Return: void
 */

void selected(stack_t **stack, unsigned int line_number)
{
	int i;
	instruction_t func[] = {
		{"push", push},	{"pall", pall},
		{"pint", pint}, {"pop", pop},
		{"swap", swap},
	      /*
	       *{"add", add},
	       *{"nop", nop},
	       */
		/*
		 *  {"", },
		*/
		{NULL, NULL}
	};

	if (var.cmd[0] == '#')
		return;

	for (i = 0; func[i].opcode; i++)
	{
		if (!strcmp(func[i].opcode, var.cmd))
		{
			strcpy(var.cmd, "     ");
			func[i].f(stack, line_number);
			return;
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number,
		var.cmd);
	exit(EXIT_FAILURE);
}
