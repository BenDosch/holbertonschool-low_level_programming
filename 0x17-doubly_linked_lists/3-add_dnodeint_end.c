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
	printf("malloc sucess\n");
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	printf("next initialized\n");
	if (*head)
	{
		printf("before current set\n");
		printf("before loop\n");
		current = *head;
		while (current->next != NULL)
		{
			printf("node value: %d\n",current->n);
			current = current->next;
		}
		current->next = new;
		new->prev = current;
	}
	else
	{
		*head = new;
		printf("head set to new\n");
	}
	printf("before return: n = %d\n", n);
	return (new);
}
