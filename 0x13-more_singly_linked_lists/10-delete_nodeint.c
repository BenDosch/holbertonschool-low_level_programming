#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of listint_t list
 * @head: head of list
 * @index: index of node to delete
 * Return: 1 on success, -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *current = *head;
	unsigned int i;

	if (index == 0 && *head != NULL)
	{
		del = *head;
		*head = (**head).next;
		free(del);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++, current = current->next)
	{
		if (i == index - 1 && current->next != NULL)
		{
			del = current->next;
			current->next = del->next;
			free(del);
			return (1);
		}
	}

	return (-1);
}
