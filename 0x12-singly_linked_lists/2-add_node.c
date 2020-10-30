#include "lists.h"

/**
 * add_node - adds a node to the beginning of list
 * @head: start of the list
 * @str: string to duplicate into new node
 * Return: addresss of new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	unsigned int i;

	n_node = malloc(sizeof(list_t));
	if (!n_node)
	{
		free(n_node);
		return (NULL);
	}
	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node->str);
		free(n_node);
		return (NULL);
	}
	for (i = 0; n_node->str[i] != '\0'; i++)
	{}
	n_node->len = i;
	n_node->next = *head;
	*head = n_node;
	return (n_node);
}
