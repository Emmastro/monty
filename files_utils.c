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
line_t **lines;
line_t **tmp;
int i;

if (filename == NULL)
	return (0);

file = fopen(filename, "r");

lineBuffer = NULL;

lines = malloc( sizeof(line_t));
if (lines == NULL)
	return (0);

/*getline will realloc lineBuffer size automatically to hold the full content of the line*/
while (getline(&lineBuffer, &size, file) != -1)
{

	printf("T");
	tmp = realloc(lines, sizeof(line_t) * lineNumber);
	printf("T");
	if (tmp == NULL)
		return (0);
	lines = tmp;

	lines[lineNumber]->content = lineBuffer;
	lines[lineNumber]->number = lineNumber;
	printf("-> %i %lu %s", lineNumber, sizeof(lines), lines[lineNumber]->content);
	lineNumber++;
	tmp = lines;
}

lines[lineNumber] = NULL;
i = 0;
while (lines[i] != NULL)
	{
		printf("%i\n", i);
		printf("%s", lines[i]->content);
		i++;
	}

return lines;
}
