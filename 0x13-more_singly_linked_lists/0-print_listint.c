#include "lists.h"

/**
 *print_listint - a function that prints all the eements of a list
 * @h: a pointer to head
 *Return: 0
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
