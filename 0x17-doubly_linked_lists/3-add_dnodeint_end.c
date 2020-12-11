#include "lists.h"

/**
 * add_dnodeint_end - Adds a node containing an int at the end of a
 * doublly linked list
 * @head: Head of list
 * @n: Number to store in Node
 * Return: address of new node, NULL on fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->prev = current;
	}
	else
		*head = new;
	return (new);
}
