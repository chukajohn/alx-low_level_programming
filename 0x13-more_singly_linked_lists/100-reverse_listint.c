#include "lists.h"

/**
 *reverse_listint - function that reverses the list
 *
 *@head: pointer head
 *
 *Return: pointer to the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *befor = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = befor;
		befor = *head;
		*head = next;
	}
	*head = befor;
	return (*head);
}
