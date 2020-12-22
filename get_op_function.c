#include "monty.h"

/**
 * get_op_func - select the correct operation function asked by user
 * @s: operator argument
 * Return: function pointer corresponding to operator given
 */
int (*get_op_func(char *s))(int)
{
	instruction_t ops[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].opcode != NULL && *(ops[i].opcode) != *s)
		i++;
	return (ops[i].f);
}
