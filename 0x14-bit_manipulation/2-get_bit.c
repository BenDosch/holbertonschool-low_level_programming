#include "holberton.h"

/**
 *
 *
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int))
		return (-1);
	n = n >> index;
	return (n & 1);
}
