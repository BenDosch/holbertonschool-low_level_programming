#include "holberton.h"

/**
 * clear_bit - temp
 * @n: number
 * @index: index
 * Return: new num or -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int base2 = 1, num = *n;
	unsigned int i;

	num >>= index;
	if (index > 64)
		return (-1);
	if (num & 1)
	{
		for (i = 0; i < index; i++)
			base2 *= 2;
		*n -= base2;
	}
	return (1);
}
