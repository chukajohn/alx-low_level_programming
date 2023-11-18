#include "lists.h"

/**
 *free_list - function that fress the list
 *@head: head node
 *Return: nothhing
 *
 *
 */

void free_list(list_t *head)
{
	list_t *recent_node;

	while ((recent_node = head) != 	NULL)
	{
		head = head->next;
		free(recent_node->str);
		free(recent_node);
	}
}
