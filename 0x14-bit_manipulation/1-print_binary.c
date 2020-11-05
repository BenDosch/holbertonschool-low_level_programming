#include "holberton.h"

/**
 *
 *
 *
 */

void print_binary(unsigned long int n);
{
	if (n > 0)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
