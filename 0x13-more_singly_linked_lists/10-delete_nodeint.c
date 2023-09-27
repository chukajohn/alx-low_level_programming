#include "lists.h"

/**
 * delete_nodeint_at_index  - function that delets anode in
 *@head: pointer to the head
 *@index: index of the nide
 *Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *emp = *head;
	unsigned int j = 0;

	listint_t *recent = NULL;

	if (*head == NULL)
		return (-1);

	if (index  == 0)
	{
		*head = (*head)->next;
		free(emp);
		return (1);
	}
	while (j < index  - 1)
	{
		if (!emp || !(emp->next))
			return (-1);
		emp = emp->next;
		j++;
	}
	recent = emp->next;
	emp->next = recent->next;
	free(recent);

	return (1);
}
