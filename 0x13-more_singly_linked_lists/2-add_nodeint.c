#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning of a listint_t
 *@n: number of nodes
 *@head: pionter to the head
 *Return: nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ren;

	ren = malloc(sizeof(listint_t));
	if (ren == NULL)
		return (NULL);

	ren->n = n;
	ren->next = *head;

	*head = ren;

	return (ren);
}
