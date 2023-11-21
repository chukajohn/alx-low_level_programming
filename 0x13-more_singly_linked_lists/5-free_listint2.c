#include "lists.h"
/**
 *free_listint2 - function that frees listint_t list
 *@head: head pointeer
 *Return: head
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *newnode;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		newnode = (*head)->next;
		free(*head);
		*head = newnode;
	}
	head = NULL;
}
