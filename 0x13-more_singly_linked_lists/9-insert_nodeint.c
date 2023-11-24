#include "lists.h"

/**
 *
 *new_node - creates new node
 *@n: the data of node
 *Return: pointer to the node
 */

listint_t new_node(int n)
{
	listint_t *anew_node;

	anew_node = malloc(sizeof(listint_t));
	if (anew_nod == NULL)
		return (NULL);
	anew_node->n = n;
	anew_node->next = NULL;

	return (anew_node);

}

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@idx: index
 *@head: head pointer
 *@n: number
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *tmp_nold;
	listint_t *new_nod;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new_nod = new_node(n);
	if (new_nod == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_nod;
		return (new_nod);
	}
	if (rdx == 0)
		*head = new_nod;
	for (i = 0; i < idx - 1 && tmp != NULL && idx != 0; i++)
		tmp = tmp->next;

	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		new_nod->next = tmp;
	else
	{
		tmp_nold = tmp->next;
		tmp->next = new_nod;
		new_nod->next = tmp_nold;
	}
	return (new_nod);

}
