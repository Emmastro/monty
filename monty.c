#include "monty.h"
#define BUFSIZE 64

int main(int argc, char const *argv[])
{
	//ssize_t n;
	line_t **lines;
	(void)(argc);
	/*holds each line of the source code. We can now tokenize it and execute each instruction*/
	lines = textfile_to_array(argv[1]);
	(void)(lines);
	return (0);
}
