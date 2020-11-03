#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: points to head of node list
 * @index: index of node to return
 * Return: nth node of list, null if no such node exists
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; current != NULL && i <= index; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
