#include "monty.h"
#define BUFSIZE 64

int main(int argc, char const *argv[])
{

	line_t *lines;
	char *line;
	int i = 0;


	/*holds each line of the source code. We can now tokenize it and execute each instruction*/
	
	lines = textfile_to_array(argv[1]);
	//printf("%lu %s\n", sizeof(lines), lines[0]->content);
	if (lines == NULL)
		return (0);

	while ((lines + i)->content != NULL)
	{
		line = _split_line(lines + i);
		
		i++;
	}
	
	(void)(argc);
	free(lines);
	return (0);
}
