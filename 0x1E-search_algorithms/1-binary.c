#include "search_algos.h"

/**
* binary_search - Function that searches for a value in a sorted
* array of integers using the Binary search algorithm
*
* @array: Pointer to the sorted array that is the subject of search
* @size: Size of the array
* @value: Value to find
*
* Return: Return: On sucess, return the index of the value.
* On failure,  returns -1.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, M = 0, R = (size - 1), i;

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
