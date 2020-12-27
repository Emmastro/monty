#include "monty.h"
#define BUFSIZE 64

char* operand;

int main(int argc, char const *argv[])
{

	line_t *lines;
	char **line;
	int line_number;
	stack_t *stack;
	char *content;

	stack = NULL;

	lines = textfile_to_array(argv[1]);
	if (lines == NULL)
		return (0);

	line_number = 0;
	while ((lines + line_number)->content != NULL)
	{
		content = (lines + line_number)->content;
		line = split_line(content);
		operand = line[1];
		get_op_func(line[0])(&stack, line_number);

		line_number++;
	}

	(void)(argc);
	free(lines);
	return (0);
}
