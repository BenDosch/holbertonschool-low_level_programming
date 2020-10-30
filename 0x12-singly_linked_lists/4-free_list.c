#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to list to free
 * Return:
 */

void free_list(list_t *head)
{
	list_t *h;

	if (h->next != NULL)
		free_list(h->next);
	free(h->str);
	free(h);
}
