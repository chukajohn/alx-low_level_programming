#include "lists.h"

/**
 * add_node_end -  a function that adds a new node at the end of a
 * @head: node head
 * @str: string to be
 * Return: address  of a new elemrnt
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh_node, *tmp;
	size_t i, countin = 0;

	fresh_node = malloc(sizeof(list_t));
	if (fresh_node == NULL)
		return (NULL);
	fresh_node->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		countin++;

	fresh_node->len = countin;
	fresh_node->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = fresh_node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = fresh_node;
	}
	return (*head);
}
