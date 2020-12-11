#include "lists.h"

/**
 * add_dnodeint - Adds a node containing an int at the start of a
 * doublly linked list
 * @head: Head of list
 * @n: Number to store in Node
 * Return: Address of new node, NULL on fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (head)
		new->next = *head;
	*head = new;
	return (new);
	}
