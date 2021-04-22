#include "search_algos.h"

/**
* jump_search - Function that searches for a value in a sorted
* array of integers using the Jump search algorithm
*
* @array: Pointer to the sorted array that is the subject of search
* @size: Size of the array
* @value: Value to find
*
* Return: On sucess, return the index of the value.
* On failure,  returns -1.
*/

int jump_search(int *array, size_t size, int value)
{
	size_t block = sqrt(size), i = 0;
	int curr;

	if (array != NULL)
	{
		for (; i + block < size; i += block)
		{
			curr = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, curr);
			if ((i + block) > size ||
				(((i + block) < size) && (array[(i + block)] >= value)))
				break;
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
					i, (i + block));
		for (; i < size && i <= (i + block); i++, curr = array[i])
		{
			printf("Value checked array[%lu] = [%d]\n", i, curr);
			if (curr == value)
				return (i);
		}
	}
	return (-1);
}
