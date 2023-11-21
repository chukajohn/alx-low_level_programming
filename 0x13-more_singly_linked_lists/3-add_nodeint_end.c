#include "lists.h"
/**
 *add_nodeint_end -  adds a new node at the end of a listint_t list
 *@head: head node
 *@n: number of nodes
 *Return: nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *newnode, *lst;

		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);


		newnode->n = n;
		newnode->next = NULL;

		if (*head == NULL)
			*head = newnode;
		else
		{
			lst = *head;
			while (lst->next != NULL)
				lst = lst->next;
			lst->next = newnode;
		}
		return (*head);
}
