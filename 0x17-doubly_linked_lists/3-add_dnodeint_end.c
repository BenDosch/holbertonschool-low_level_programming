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
	if (!new)
		return (NULL);
	printf("malloc sucess\n");
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	printf("next initialized\n");
	if (!head)
	{
		*head = new;
	}
	else
	{
		printf("before current set\n");
		current = (dlistint_t *)head;
		printf("before loop\n");
		while (!current->next)
			current = current->next; printf("in loop\n");
		current->next = new;
		new->prev = current;
	}
	printf("before return: n = %d\n", n);
	return (new);
}
