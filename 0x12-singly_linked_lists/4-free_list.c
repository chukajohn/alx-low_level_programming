#include "lists.h"

/**
 * free_list - a function that free
 * @head: head node
 *
 *
 *Return: the freed nodes
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
