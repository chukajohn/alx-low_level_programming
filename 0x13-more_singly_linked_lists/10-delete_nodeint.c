#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the nodes at the index
 *@head: head pointer
 *@index: index of the nodes
 *Return: 1 on sucess -1 when unsucessful
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *tmp;
	unsigned int i;

	tmp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && tmp != NULL && index != 0; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		node = tmp->next;
		free(tmp);
		*head = node;
	}
	else
	{
		if (tmp->next == NULL)
			node = tmp->next;
		else
			node = tmp->next->next;
		free(tmp->next);
		tmp->next = node;
	}
	return (1);
}
