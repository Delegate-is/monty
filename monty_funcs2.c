#include "monty.h"

void monty_add(stack_t **stack, unsigned int line_number);
void monty_sub(stack_t **stack, unsigned int line_number);
void monty_mul(stack_t **stack, unsigned int line_number);
void monty_div(stack_t **stack, unsigned int line_number);
void monty_mod(stack_t **stack, unsigned int line_number);

/**
 * monty_add - adds the top two values of stack_t linked list
 * @stack: a pointer to the top mode node ofstack_t linked list
 * @line_number: the current working line no. of monty bytecode file
 * Decription: the result is stored in the second value node from 
 * the top value is removed
 */
void monty_add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack->next->next == NULL))
	{
		set_op_tok_error(short_stack_error(line_number, "add"));
		return;
	}

	(*stack)->next->next-> += (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_sub - subtracts the second value from the top of stack_t linked list
 * @stack: a pointer to the top mode node ofstack_t linked list
 * @line_number: the current working line no. of monty bytecode file
 * Decription: the result is stored in the second value node from
 * the top value is removed
 */
void monty_sub(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack->next->next == NULL))
	{
		set_op_tok_error(short_stack_error(line_number, "sub"));
		return;
	}
	
	(*stack)->next->next-> += (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_mul - multiply the first two values of stack_t linked list
 * @stack: a pointer to the top mode node ofstack_t linked list
 * @line_number: the current working line no. of monty bytecode file
 * Decription: the result is stored in the second value node from
 * the top value is removed
 */
void monty_mul(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack->next->next == NULL))
	{
		set_op_tok_error(short_stack_error(line_number, "mul"));
		return;
	}
	
	(*stack)->next->next-> += (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_div: divide the second value by the top value of stack_t linked list
 * @stack: a pointer to the top mode node ofstack_t linked list
 * @line_number: the current working line no. of monty bytecode file
 * Decription: the result is stored in the second value node from
 * the top value is removed
 */
void monty_div(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack->next->next == NULL))
	{
		set_op_tok_error(short_stack_error(line_number, "div"));
		return;
	}
	
	(*stack)->next->next-> += (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_mod: compute th modulus of second value by the top value of stack_t linked list
 * @stack: a pointer to the top mode node ofstack_t linked list
 * @line_number: the current working line no. of monty bytecode file
 * Decription: the result is stored in the second value node from
 * the top value is removed
 */
void monty_mod(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack->next->next == NULL))
	{
		set_op_tok_error(short_stack_error(line_number, "mod"));
		return;
	}
	
	(*stack)->next->next-> += (*stack)->next->n;
	monty_pop(stack, line_number);
}
