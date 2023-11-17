#include "lists.h"
/**
 *list_len - prints the number of elemrnt
 *@h: head node
 *
 *Return: node
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
