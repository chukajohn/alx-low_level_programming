#include "lists.h"

/**
 * add_nodeint - function that add new node
 * @head: new head to be added
 * @n: number of headee
 * Return: 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *anew;

	anew = malloc(sizeof(listint_t));
	if (anew == NULL)
		return (NULL);
	anew->n = n;
	anew->next = *head;
	*head = anew;

	return (anew);

}
