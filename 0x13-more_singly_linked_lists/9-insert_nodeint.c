#include "lists.h"

/**
 * insert_nodeint_at_index - a function inserts a new node at a given position
 *@head: pointer to the head
 *@idx: index where node is added
 *@n: number of node
 *Return: pointerto the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *anew;
	unsigned int j;
	listint_t *emp = *head;

	anew = malloc(sizeof(listint_t));

	if (!anew || !head)
		return (NULL);

	anew->n = n;
	anew->next = NULL;

	if (idx == 0)
	{
		anew->next = *head;
		*head = anew;
		return (anew);
	}

	for (j = 0; emp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			anew->next  = emp->next;
			emp->next = anew;
			return (anew);
		}
		else
			emp = emp->next;
	}
	return (NULL);
}
