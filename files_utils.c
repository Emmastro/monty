#include "monty.h"
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file name
 * Return:  the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename)
{

FILE *file;
char *lineBuffer;
size_t size = 0;

if (filename == NULL)
	return (0);

file = fopen(filename, "r");

lineBuffer = NULL; //malloc(sizeof(char));

//getline will realloc lineBuffer size automatically to hold the full content of the line

while (getline(&lineBuffer, &size, file) != -1)
{
    printf("%s", lineBuffer);
    //Break down the line to get the opcode and operand
    //line = strtok(buffer, "\n");
}

free(lineBuffer);

return (0);
}
