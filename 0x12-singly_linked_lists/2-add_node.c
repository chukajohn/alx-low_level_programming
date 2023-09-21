#include "lists.h"

/**
 * add_node -  a function that adds a new node at the beginning of a
 * @head: head of node
 * @str: string to store
 * Return: the address of a new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh_node;
	size_t i, countin = 0;

	fresh_node = malloc(sizeof(list_t));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		countin++;
	fresh_node->len = countin;
	fresh_node->next = *head;
	*head = fresh_node;

	return (*head);
}
