#include "function_pointers.h"

/**
 * array_iterator -  calls a function on every element of array[size]
 * @array: array passed to function
 * @size: size of array
 * @action: function to apply to elements of array
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array)
		return;
	if (!action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
