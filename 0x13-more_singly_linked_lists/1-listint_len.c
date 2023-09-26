#include "lists.h"

/**
 *listint_len - a finction that returns the nunber of element
 * @h: header pointer
 *Return: 0
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
