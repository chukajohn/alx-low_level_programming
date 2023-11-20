#include "lists.h"

/**
 *listint_len - function that returns the number of element in a linked list
 *@h: nodees head
 *Return: nodes
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
