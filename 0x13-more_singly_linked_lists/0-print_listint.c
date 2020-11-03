#include "lists.h"

/**
 * print_listint -  prints all the elements of listint_t
 * @h: pointer to header of list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	unsigned int i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
