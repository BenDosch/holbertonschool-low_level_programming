#include "lists.h"

/**
 * print_list - prints a string and its lenght in a linked list
 * @h: list to print
 * Return: the size of the list
 */

size_t print_list(const list_t *h)
{
	unsigned long int i;

	if (h->next == NULL)
		return (0);
	for (i = 0; h->next == NULL; i++, h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	}
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%lu] %s\n", h->len, h->str);
	return (i);
}
