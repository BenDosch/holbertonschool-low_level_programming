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

	for (i = 0; current != NULL && i <= index; i++)
	{
		if (i == index)
		{
			(current->next)->prev = current->prev;
			printf("cnp: %d\n", current->next->prev->n);
			(current->prev)->next = current->next;
			printf("cpn: %d\n", current->prev->next->n);
			free(current);
			return (1);
		}
		current = current->next;
		printf("node: %d\n", current->n);
	}
	return (-1);
}
