#include "holberton.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string of chars for a binary num
 * Return: decimal value of binary number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		j <<= 1;
		if (b[i] != '1' && b[i] != '0')
			return (0);
		j += b[i++] - 48;
	}
	return (j);
}
