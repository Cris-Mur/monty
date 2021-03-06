#ifndef _MONTY_H
#define _MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#ifndef _STACK_S
#define _STACK_S

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

#endif /*_STACK_S*/

#ifndef _OPCODE_S
#define _OPCODE_S

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct g_vars - global variables structure
 * @cmd: opcode word
 * @psh_dat: push input data
 *
 * Description: Structure of the gloval variables works
 * like an global variable
 */
typedef struct g_vars
{
	char cmd[5];
	int psh_dat;
} g_vars_t;

#endif /*_OPCODE_S*/

extern g_vars_t var;

/*opfunctions*/
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add_(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub_(stack_t **stack, unsigned int line_number);
void div_(stack_t **stack, unsigned int line_number);
void mul_(stack_t **stack, unsigned int line_number);
void mod_(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
/*opfunctions*/

void selected(stack_t **stack, unsigned int line_number);
void free_stack(stack_t *head);
void valid_dig(char *tok, size_t l_n);
void push_ERR(size_t l_n);
int valid_tok(char *token, int line_num);

#endif /*_MONTY_H*/
