#include "search_algos.h"

/**
* jump_list - function that searches for a value in a
* sorted list of integers using the Jump search algorithm.
*
* @list: Pointer to the sorted linked list that is the subject of search
* @size: Size of the linked list
* @value: Value to find
*
* Return: On sucess, pointer to the first node containing value
* On failure, NULL.
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t block = sqrt(size), i, j;
	listint_t *curr = list, *next;

	if (curr != NULL)
	{
		for (i = 0; i < size; i += block, curr = next)
		{

			for (j = 0, next = curr; j < block; j++, next = next->next)
			{
				if (next->next == NULL)
					break;
			}
			printf("Value checked at index [%lu] = [%d]\n",
				   next->index, next->n);
			if (next->n >= value || next->next == NULL)
			{
				printf("Value found between indexes [%lu] and [%lu]\n",
					   curr->index, next->index);
				for (; curr != next; curr = curr->next)
				{
					printf("Value checked at index [%lu] = [%d]\n",
						   curr->index, curr->n);
					if (curr->n == value)
						return (curr);
				}
				return (NULL);
			}
		}
	}
	return (NULL);
}
