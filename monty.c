#include "monty.h"
#define BUFSIZE 64

int main(int argc, char const *argv[])
{

	line_t **lines;
	int i = 0;

	/*holds each line of the source code. We can now tokenize it and execute each instruction*/
	
	lines = textfile_to_array(argv[1]);
	//printf("%lu %s\n", sizeof(lines), lines[0]->content);
	if (lines == NULL)
		return (0);

	while (lines[i] != NULL)
	{
		printf("%i\n", i);
		printf("%s", lines[i]->content);
		i++;
	}
	
	(void)(argc);
	free_lines(lines);
	return (0);
}

void free_lines(line_t **lines)
{
	int i = 0;
	while (lines[i] != NULL)
	{
		free(lines[i]);
		i++;
	}
	free(lines);
}