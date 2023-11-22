#include "lists.h"

/**
 *free_listp - free linked list
 *@head: head of list
 *Return: no return
 *
 */
void  free_listp(listint_t **head)
{
	listint_t *tmp;
	listint_t *new;

	if (head != NULL)
	{
		new = *head;
		while ((tmp = new) != NULL)
		{
			new = new->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 *print_listint_safe -  a function that prints a listint_t linked lis
 *@head: head pointer
 *
 *Return: 0
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *ptr, *name, *new, *add;
	size_t nodes;

	ptr = NULL;
	while (head != NULL)
	{
		new =  malloc(sizeof(listint_t));

		if (new == NULL)
			exit(98);
		new = (void *)head;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	free_listp(&ptr);
	return (nodes);
}
