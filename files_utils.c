#include "monty.h"
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file name
 * @letters: the number of letters it should read and print
 * Return:  the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

int file;
ssize_t rcount;
char *buffer;
char *line;

if (filename == NULL)
	return (0);

file = open(filename, O_RDWR);
if (file == -1)
	return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
	free(buffer);
	return (0);
}

rcount = read(file, buffer, letters);
if (rcount == -1)
	return (0);

line = strtok(buffer, "\n");
for (int i = 0; line && i < 2; i++)
{
    printf("%s \n", line);
    //TODO: we need to break this line further into 2 part, opcode and operand
    //TODO: Save this data on the instruction_t type def for further processing
    line = strtok(NULL, "\n");
}

free(buffer);

close(file);

return (0);
}
