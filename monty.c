#include "monty.h"
#define BUFSIZE 64

int main(int argc, char const *argv[])
{

	line_t *lines;
	char **line;
	int i = 0;
	stack_t *stack;
	char *content;
	unsigned int n = 0;

	stack = NULL;

	lines = textfile_to_array(argv[1]);
	if (lines == NULL)
		return (0);

	while ((lines + i)->content != NULL)
	{
		content = (lines + i)->content;
		line = split_line(content);
		if (line[1])
			n = (unsigned int) atoi(line[1]);
		get_op_func(line[0])(&stack, n);

		i++;
	}

	(void)(argc);
	free(lines);
	return (0);
}
