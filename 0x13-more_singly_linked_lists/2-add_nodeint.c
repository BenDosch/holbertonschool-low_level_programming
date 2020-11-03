#include "lists.h"

/**
 * add_nodeint - adds a node to begingin of a listint_tlist
 * @head: pointer to the pointer to the head of the list
 * @n: element for new node
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t*)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
