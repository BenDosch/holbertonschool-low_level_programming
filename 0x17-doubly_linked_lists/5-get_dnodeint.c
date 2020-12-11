#include "lists.h"

/**
 * get_dnodeint_at_index - finds the index-th node in a doubbly linked list
 * @head: head of list
 * @index: index to search for
 * Return: pointer to node at index or NULL if no node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; i <= index && current; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
