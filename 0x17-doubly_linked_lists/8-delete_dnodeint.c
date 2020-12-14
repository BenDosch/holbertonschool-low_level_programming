#include "lists.h"

/**
 * delete_dnodeint_at_index - Delets a node at a specificed index
 * of a doublly linked list
 * @head: Head of list
 * @index: Index to add new node at
 * Return: address of new node, NULL on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (!head || !current)
		return (-1);
	for (i = 0; current != NULL && i <= index; i++)
	{
		if (i == index)
		{
			if (current->next)
				(current->next)->prev = current->prev;
			else if (!(current->next) && current->prev)
				current->prev->next = NULL;
			if (current->prev)
				(current->prev)->next = current->next;
			else if (!(current->prev) && current->next)
				*head = current->next;
			if (!(current->next) && !(current->prev))
				*head = NULL;
			free(current);
			return (1);
		}
		current = current->next;
	}
	return (-1);
}
