#include "lists.h"

/**
 * free_listint2 - frees a listint_t list then sets head to NULL
 * @head:head of list to free
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	while (*head != NULL)
	{
		next = (**head).next;
		free(*head);
		*head = next;
	}
	head = NULL;
}
