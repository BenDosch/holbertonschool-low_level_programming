#include "lists.h"


/**
 * dlistint_len - returns the len of a doublely linked list
 * @h: header of list
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current = (dlistint_t *)h;
	size_t count = 0;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
