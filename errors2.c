#include "monty.h"

int pop_error(unsigned int line_number);
int pint_error(unsigned int line_number);
int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, *message);

/**
 * pop_error - prints pop erro messages for empty stack
 * @line_number: line no. in script where error occured
 * Return: (EXIT_FAILURE)
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pint_error - prints pop error messages for empty stack
 * @line_number: line no. in monty bytecode file where error occured
 * Return: (EXIT_FAILURE)
 */
int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d can't pint an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * short_stack_error - prints monty math function error messages
 * for stack/queues smaller than two nodes
 * @line_number: line no. in monty bytecode file where error occured
 * Return: (EXIT_FAILURE)
 */
int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u can't %s, stack too short\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * div_error - prints division error messages for division by 0
 * @line_number: line no. in monty bytecode file where error occured
 * Return: (EXIT_FAILURE)
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - prints pchar error messages for empty stack nad non characters
 * @line_number: line no. in monty bytecode file where error occured
 * @message: corresponding error message to print
 * Return: (EXIT_FAILURE)
 */
int pchar_error(unsigned int line_number, *message)
{
	fprintf(stderr, "L%u can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
