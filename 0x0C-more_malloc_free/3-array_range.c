#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: lowest value in array
 * @max: largest value in array:
 * Return: ptr
 */

int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
