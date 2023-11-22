#include "lists.h"

/**
 *get_nodeint_at_index -  eturns the nth node of a listint_t linked list
 *@index: index
 *@head: pointer head
 *Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t c;

	for (c = 0; c < index; c++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
