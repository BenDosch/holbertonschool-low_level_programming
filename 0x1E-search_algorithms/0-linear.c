#include "search_algos.h"

/**
* linear_search - Function that searches for a value in an array
* of integers using the Linear search algorithm
*
* @array: Pointer to the array that is the subject of search
* @size: Size of the array
* @value: Value to find
*
* Return: On sucess, return the index of the first occurance of value.
* On failure,  returns -1.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
