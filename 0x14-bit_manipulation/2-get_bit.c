#include "holberton.h"

/**
 *
 *
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 16)
		return (-1);
	n = n >> index;
	return (n & 1);
}
