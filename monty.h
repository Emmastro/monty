#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <ctype.h>
#include <fcntl.h>

extern char* operand;

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
 * struct line_s - line content and its number
 * @content: line content
 * @number: line number 
 *
 * Description: stores line of the monty source code
 */
typedef struct line_s
{
	char *content;
	int number;
} line_t;


line_t *textfile_to_array(const char *filename);
void op_push(stack_t **stack, unsigned int line_number);
void op_pall(stack_t **stack, unsigned int line_number);
/*int op_pint(int operand);
int op_pop(int operand);
int op_swap(int operand);*/

char **split_line(char *line);
void (*get_op_func(char *s))(stack_t**, unsigned int);

void free_lines(line_t *head);
void free_stack(stack_t *head);
int _atoi(char *s, int* n);

void free_line(char **line);
#endif

