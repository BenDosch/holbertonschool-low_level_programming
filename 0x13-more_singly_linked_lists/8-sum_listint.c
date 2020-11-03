#include "lists.h"

/**
 * sum_listint - returns the sume of all data in listint_t list
 * @head: head node of list
 * Return: sum of data in list, 0 if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	unsigned int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
