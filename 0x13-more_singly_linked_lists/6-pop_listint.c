#include "lists.h"

/**
 * pop_listint - a function that delete head node of a list
 *@head: pointer to the head
 *
 *Return: 0 on sucess
 */
int pop_listint(listint_t **head)
{
	listint_t *emp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	emp = (*head)->next;
	free(*head);
	*head = emp;

	return (i);
}
