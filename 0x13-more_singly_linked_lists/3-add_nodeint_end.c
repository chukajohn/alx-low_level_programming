#include "lists.h"

/**
 *add_nodeint_end - a functiin that add a node at end
 * @head: header
 * @n: number of nodes
 * Return: the added node
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *anew, *last;

	anew = malloc(sizeof(listint_t));
	if (anew == NULL)
		return (NULL);
	anew->n = n;
	anew->next = NULL;

	if (*head == NULL)
		*head = anew;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = anew;
	}
	return (*head);
}
