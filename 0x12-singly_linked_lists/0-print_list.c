#include "lists.h"

/**
 *print_list - function that prints list
 *@h: singly linked list
 *
 *Return: the number of node
 *
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes  = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	
	}
	return (nodes);
}
