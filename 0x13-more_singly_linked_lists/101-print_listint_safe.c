#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 *looped_listint_len - counts the number of nodes
 *@head: pointer head
 *Return: 0 if the list is not looped
 */

looped_listint_len(const listint_t *head)
{
	const listint_t *beliv, *lare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	beliv = head->next;
	lare = (head->next)->next;

	while (lare)
	{
		if (beliv == lare)
		{
			beliv = head;
			while (beliv != lare)
			{
				nodes++;
				beliv = beliv->next;
			}
			return (nodes);
		}
		beliv = beliv->next;
		lare = (lare->next)->next;
	}
	return (0);
}

/**
 *print_listint_safe- function that prints a listint_t list
 *@head: pointer to the head
 *
 *Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, idx = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (head != NULL; node++)
		{
			printf("[%p] %d\n", (void *head, head->n));
					head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < node; idx++)
		{
			printf("[%p] %d\n", (void ')head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void ')head, head->);
	}
	return (node);
}
