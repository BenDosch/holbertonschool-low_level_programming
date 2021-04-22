#include "search_algos.h"

/**
* binary_step - Function that searches for a value in a specified range
* of a sorted array of integers using the Binary search algorithm
*
* @array: Pointer to the sorted array that is the subject of search
* @low: Low end of range
* @high: High end of range
* @value: Value to find
*
* Return: Return: On sucess, return the index of the value.
* On failure,  returns -1.
*/

int binary_step(int *array, size_t low, size_t high, int value)
{
	size_t L = low, M = 0, R = high, i;

	if (array != NULL)
	{
		while (L <= R)
		{
			printf("Searching in array: %d", array[L]);
			for (i = L + 1; i <= R; i++)
				printf(", %d", array[i]);
			printf("\n");
			M = ((L + R) / 2);
			if (array[M] == value)
				return (M);
			else if (array[M] < value)
				L = (M + 1);
			else if (array[M] > value)
				R = (M - 1);
		}
	}
	return (-1);
}

/**
* exponential_search - Function that searches for a value in a sorted
* array of integers using the Exponential search algorithm
*
* @array: Pointer to the sorted array that is the subject of search
* @size: Size of the array
* @value: Value to find
*
* Return: Return: On sucess, return the index of the value.
* On failure,  returns -1.
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array != NULL && size > 0)
	{
		while (i < size && array[i] <= value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			else if ((i * 2) >= size)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", i, (size - 1));
				return (binary_step(array, i, (size - 1), value));
			}
			else if ((i * 2) < size && array[i * 2] >= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", i, (i * 2));
				return (binary_step(array, i, (i * 2), value));
			}
			else
				i *= 2;
		}
	}
	return (-1);
}
