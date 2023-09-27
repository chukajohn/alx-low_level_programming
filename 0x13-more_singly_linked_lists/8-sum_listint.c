#include "lists.h"

/**
 * sum_listint - function that sum all the list
 * @head: pointer to head
 * Return: 0
 *
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *emp = head;

	while (emp)
	{
		sum += emp->n;
		emp = emp->next;
	}
	return (sum);
}
