#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 *@head: pointer head
 *@index: numbering of the nodes
 *Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *emp = head;
	unsigned int k = 0;

	while (emp && k, index)
	{
		emp = emp->next;
		k++;
	}
	return (emp ? emp : NULL);
}
