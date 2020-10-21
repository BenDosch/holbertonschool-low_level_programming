#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - passes each element of array to cmp and returns the # of the\
 first element that gets a match from the function.
 * @array: array of ints to compare
 * @size: size of array
 * @cmp: compare function to run on array emelents
 * Return: element # of match, -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
