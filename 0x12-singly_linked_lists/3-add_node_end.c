#include "lists.h"

/**
 * add_node_end - adds a node to the end of list
 * @head: start of the list
 * @str: string to duplicate into new node
 * Return: addresss of new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *current;
	unsigned int i;

	n_node = malloc(sizeof(list_t));
	if (!n_node)
		return (NULL);
	if (str == NULL)
		n_node->str = NULL;
	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}
	for (i = 0; n_node->str[i] != '\0'; i++)
	{}
	n_node->len = i;
	n_node->next = NULL;
	if (*head == NULL)
		*head = n_node;
	else
	{
		current = *head;
		while ((*current).next != NULL)
			current = (*current).next;
		(*current).next = n_node;
	}
	return (n_node);
}
