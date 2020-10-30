#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to list to free
 * Return:
 */

void free_list(list_t *head)
{
	if (head->next != NULL)
		free_list(head->next);
	if (head->str != NULL)
		free(head->str);
	free(head);
}
