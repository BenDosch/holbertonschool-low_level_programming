#include "lists.h"

/**
 * print_list - prints a string and its lenght in a linked list
 * @h: list to print
 * Return: the size of the list
 */

size_t print_list(const list_t *h)
{
	unsigned long int i;
	list_t *current = (list_t *)h;

	if (h == NULL)
		return (0);
	for (i = 1; current->next != NULL; i++)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);
		current = current->next;
	}
	if (current->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", current->len, current->str);
	return (i);
}
