#include "lists.h"

/**
 *add_node - function that add new node
 *@head: head node
 *@str: string
 *Return: nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t i, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
