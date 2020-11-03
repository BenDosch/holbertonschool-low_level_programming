#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a certin index
 * @head: head node of list
 * @idx: index to insert node at
 * @n: data for new node
 * Return: address of new node, NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);
	new = (listint_t*)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	for(i = 0; i < idx && current != NULL; i++, current = current->next)
	{
		if (i == idx - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
	}
	free(new);
	return (NULL);
}
