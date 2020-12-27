#include "monty.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 */

void free_stack(stack_t *head)
{
	stack_t *current;
	stack_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

void free_lines(line_t *lines)
{
    int i = 0;

	while ((lines + i)->content != NULL)
	{
		free((lines + i)->content);
        i++;
	}
	free(lines);
}


void free_line(char **line)
{
    int i = 0;

	while (line[i] != NULL)
	{
		//free(line[i]);
        i++;
	}
	free(line);
}