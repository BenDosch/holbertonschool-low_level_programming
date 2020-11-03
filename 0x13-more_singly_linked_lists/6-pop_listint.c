#include "lists.h"

/**
 * pop_listint - removeds the head node of a list
 * @head: head node of list
 * Return: data of hed node, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *newh;
	int ret;

	if (*head == NULL)
		return (0);
	newh = (**head).next;
	ret = (**head).n;
	free(*head);
	*head = newh;
	return (ret);
}
