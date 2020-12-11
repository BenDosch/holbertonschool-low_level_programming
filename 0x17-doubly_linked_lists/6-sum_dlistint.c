#include "lists.h"


/**
 * sum_dlistint - Returns the sum of the values store in a double linked list
 * @head: header of list
 * Return: Sum of node values
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
