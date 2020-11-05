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
	if (index == 0)
		reutrn (n & 1);
	n = n >> index - 1;
	return (n & 1);
}
