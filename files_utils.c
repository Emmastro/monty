#include "monty.h"

/**
 * textfile_to_array - reads a text file and prints it to the POSIX
 * standard output
 * @filename: pointer to the file name
 * Return:  the actual number of letters it could read and print
*/

line_t *textfile_to_array(const char *filename)
{
FILE *file;
char *lineBuffer;
size_t size = 0;
int lineNumber = 0;
line_t *lines;
line_t *tmp;

if (filename == NULL)
	return (0);

file = fopen(filename, "r");

if (file == NULL)
	return (0);

lineBuffer = NULL;

lines = NULL;

while (getline(&lineBuffer, &size, file) != -1)
{
	tmp = realloc(lines, sizeof(line_t) * (lineNumber + 1));
	if (tmp == NULL)
		return (0);
	lines = tmp;

	(lines + lineNumber)->content = strdup(lineBuffer);
	(lines + lineNumber)->number = lineNumber;
	lineNumber++;
	tmp = lines;
}

(lines + lineNumber)->content = NULL;
return (lines);
}
