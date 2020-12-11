#include "lists.h"


/**
 * print_dlistint - prints the elements of a double linked list
 * @h: header of list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current = (dlistint_t *)h;
	size_t count = 0;

	while (current)
	{
		printf("%d", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
