#include "lists.h"

/**
 *print_listint - print  all the elements of a listint_t
 *@h: singly link list
 *Return: the number nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
