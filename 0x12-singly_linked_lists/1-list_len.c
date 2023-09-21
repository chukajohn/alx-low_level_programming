#include "lists.h"

/**
 * list_len -  a function that returns the number of elements
 * @h: head node
 * Return: lenght of the node
 *
 */

size_t list_len(const list_t *h)
{
	size_t len_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		len_nodes++;
	}
	return (len_nodes);
}
