#include "monty.h"

/**
 *op_push - adds elements to a stack
 *@stack - pointer to the first node/element in a stack
 *@line_number - the line within the stuck 
 *Return: nothing
 */

void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: stack not found\n", line_number);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(*stack);
		exit (EXIT_FAILURE);
	}

	new->next = *stack;
	new->prev = NULL;
	new->n = line_number;

	if (*stack)
		(*stack)->prev = new;
	*stack = new;
}

/**
 *op_pall - prints the data of all nodes in a stack
 *@stack: pointer to the head node pointer
 *@line_number: the line number
 *Return: void
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;
	temp = *stack;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
