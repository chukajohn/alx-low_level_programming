#include "lists.h"

/**
 *free_listint2 - function that free a list int
 * @head: a pointer to the head
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *emp;

	if (head == NULL)
		return;

	while (*head)
	{
		emp = (*head)->next;
		free(*head);
		*head = emp;
	}
	head = NULL;
}
