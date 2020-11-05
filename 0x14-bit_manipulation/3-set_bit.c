#include "holberton.h"

/**
 * set_bit - sets bit at index to 1
 * @n: number to act on
 * @index: index to change.
 * Return: 1 on sucess, -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index);
{
	if (index > 64)
		return (-1);
	*n = (*n | 1 << index);
	return (1);
}
