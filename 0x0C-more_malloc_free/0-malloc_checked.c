#include "holberton.h"

/**
 * malloc_checked - allocates memory size b to pointer, and checks if null
 * @b: bytes to allocate
 * Return: ptr on sucess, exit status 98 on fail.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
