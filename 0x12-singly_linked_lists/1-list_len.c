#include "lists.h"

/**
 * list_len - returns the lenght of a list
 * @h: list to get lenght of.
 * Return: the size of the list
 */

size_t list_len(const list_t *h)
{
	unsigned long int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
