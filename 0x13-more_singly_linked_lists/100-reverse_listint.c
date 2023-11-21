#include "lists.h"

/**
 *reverse_listint - function that reverses a listint_t linked list
 *@head: head pointer
 *Return: pointer
 *
 *
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *tmp;

	if (head == NULL || *head == NULL)
		return (NULL);
	tmp = *head;
	*head = tmp->next;
	tmp->next = NULL;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		if (new == NULL)
			return (*head);
		*head = new;
	}
	if (*head == NULL)
	{
		*head = tmp;
		return (*head);
	}
	return (NULL);
}
