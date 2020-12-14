#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node containing an int at a specificed
 * index of a doublly linked list
 * @h: Head of list
 * @idx: Index to add new node at
 * @n: Number to store in Node
 * Return: address of new node, NULL on fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);

	}
	if (!h)
		return (NULL);
	for (i = 0; current && i < idx; i++)
	{
		if (current->next == NULL && i == (idx - 1))
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if (i == (idx - 1))
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = current;
			new->next = current->next;
			current->next = new;
			new->next->prev = new;
			return (new);
		}
		current = current->next;
	}
	return (NULL);
}
