#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: head of list
 * Return: new head of list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *previous = NULL;


	while (*head != NULL)
	{
		next = (**head).next;
		(**head).next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
