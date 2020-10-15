#include "holberton.h"

/**
 * _calloc - allocates memory to an array and sets it to 0
 * @nmemb: number of elements to the array
 * @size: size of each element
 * Return: pointer to array on sucess, NULL on fail.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
