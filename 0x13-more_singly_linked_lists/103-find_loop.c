#include "lists.h"

/**
 *find_listint_loop - function that finds the loop in listint_t
 *@head: pointer to the head
 *
 *Return: NULL where there is no loop
 *
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop, *lare;

	if (head == NULL || head->next == NULL)
			return (NULL);

	loop = head->next;
	lare = (head->next)->next;

	while (lare)
	{
		if (loop == lare)
		{
			loop = head;

			while (loop != lare)
			{
				loop = loop->next;
				lare = lare->next;
			}
			return (loop);
		}
		loop = loop->next;
		lare = (lare->next)->next;
	}
return (NULL);
}
