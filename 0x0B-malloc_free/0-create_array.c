#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of size that is full of c
 * @size: size of array
 * @c: char to fill array with
 * Return: pointer to array, or Null if fail.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}
	return (arr);
}
