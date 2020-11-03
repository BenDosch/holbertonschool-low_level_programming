#include "lists.h"

/**
 * add_nodeint_end - adds a new listint_t list node to the end of list
 * @head: pointer to pointer to the head of the list
 * @n: element of new node
 * Return: address of new element or NULL on fail.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current = *head;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;

		current->next = new;
		return (new);
	}
	*head = new;
	return (new);
}
