#include "search_algos.h"

/**
* interpolation_search - Function that searches for a value in a sorted
* array of integers using the Interpolation search algorithm
*
* @array: Pointer to the sorted array that is the subject of search
* @size: Size of the array
* @value: Value to find
*
* Return: Return: On sucess, return the index of the value.
* On failure,  returns -1.
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = (size - 1);
	size_t pos = low + (((double)(high - low) /
						(array[high] - array[low])) *
						(value - array[low]));

	if (array != NULL)
	{
		if (pos >= size)
			printf("Value checked array[%lu] is out of range\n", pos);
		while (pos < size && low != high)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
			if (array[pos] > value)
				high = pos - 1;
			else if (array[pos] < value)
				low = pos + 1;
			pos = low + (((double)(high - low) /
						 (array[high] - array[low])) *
						 (value - array[low]));
		}
	}
	return (-1);
}
