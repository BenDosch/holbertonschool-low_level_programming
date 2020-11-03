#include "lists.h"

/**
 * listint_len - function that returns the number of elemtes in a linked list
 * @h: pointer to head of linked list
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	unsigned int i;

	for (i = 0; current != NULL; i ++)
		current = current->next;
	return (i);
}
