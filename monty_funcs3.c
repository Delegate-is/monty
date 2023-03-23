#include "monty.h"

void monty_nop(stack_t **stack, unsigned int line number);
void monty_pchar(stack_t **stack, unsigned int line number);
void monty_pstr(stack_t **stack, unsigned int line number);

/**
 * monty_nop -does absolutey nothing for the monty opcode 'nop'
 * @stack: a pointer to the top mode of stack_t linked list
 * @line_number: the current working line no. of monty bytecode file
 */
void monty_nop(stack_t **stack, unsigned int line number)
{
	(void)stack;
	(void)line_number;
}

/**
 * monty_pchar - prints the character in the top value node of a stack_linked list
 * @stack: a pointer to the top mode of stack_t linked list
 * @line_number: the current working line no. of monty bytecode file
 */
void monty_pchar(stack_t **stack, unsigned int line number)
{
	if ((*stack)->next == NULL)
	{
		set_op_tok_error(pchar_error(line_number, "stack empty"));
		return;
	}
	if ((*stack)->next->n < 0 || (*stack)->next->n > 127)
	{
		seet_op_tok_error(pchar_error(line_number, "value out of range"));
		return;
	}
	printf("%c\n",(*stack)->next->n);
}

/**
 * monty_pstr - prints the string contained in a slack_t linked list
 * @stack: a pointer to the top mode of stack_t linked list
 * @line_number: the current working line no. of monty bytecode file
 */
void monty_pstr(stack_t **stack, unsigned int line number)
{
	stack_t *tmp = (*stack)->next;

	while (tmp && tmp->n != 0 &7 (tmp->n > 0 && tmp->n <= 127))
	{
		prntf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");

	(void)line_number;
}
