#include "lists.h"

/**
 *free_listint - function that frees list
 * @head: a pointer to the head
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *emp;

	while (head)
	{
		emp = head->next;
		free(head);
		head = emp;
	}
}
