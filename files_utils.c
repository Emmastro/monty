#include "monty.h"

/**
 * textfile_to_array - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file name
 * Return:  the actual number of letters it could read and print
*/

line_t **textfile_to_array(const char *filename)
{

FILE *file;
char *lineBuffer;
size_t size = 0;
int lineNumber = 1;
line_t *line;
line_t **lines;

if (filename == NULL)
	return (0);

file = fopen(filename, "r");

lineBuffer = NULL;

lines = NULL;

/*getline will realloc lineBuffer size automatically to hold the full content of the line*/
while (getline(&lineBuffer, &size, file) != -1)
{
	lines = realloc(lines, sizeof(line_t) * lineNumber);
	line = malloc(sizeof(line_t));
	line->content = lineBuffer;
	line->number = lineNumber;
	lines[lineNumber] = line;
	lineNumber++;
}
//TODO: lines should be NULL terminated

return lines;
}
