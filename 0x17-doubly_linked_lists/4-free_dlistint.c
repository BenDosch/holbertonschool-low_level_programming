#include "lists.h"

/**
 * free_dlistint - frees a double list of type dlistint_t
 * @head: Head of list
 * Return: None
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
