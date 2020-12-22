#include "monty.h"

/**
 * get_op_func - select the correct operation function asked by user
 * @s: operator argument
 *@line: struct containing line number
 *@meta: struct containing the allocated memory
 *
 * Return: function pointer corresponding to operator given

 *
int (*get_op_func(char *s))(int)

 */
void (*get_op_func(char *s))(stack_t**, unsigned int)
>>>>>>> 70078cb1c08841746de38f0736b239cf8ab0708b
{
	instruction_t ops[] = {
		{"push", op_push},
		{"pall", op_pall},
		//{"pint", op_pint},
		//{"pop", op_pop},
		//{"swap", op_swap},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].opcode != NULL && *(ops[i].opcode) != *s)
		i++;
	return (ops[i].f);
}
*/
void (*get_op_func(char *s))(stack_t **, unsigned int)
 {
  
   instruction_t ops[] = {
			  {"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{NULL, NULL}
   };
 unsigned int i = 0;
while ((ops[i].opcode != NULL && *(ops[i].opcode) != *s))
		i++;
	return (ops[i].f);
 }
