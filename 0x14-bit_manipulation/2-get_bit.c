#include "holberton.h"

/**
 * get_bit - get the bit value at index
 * @n: number to search
 * @index: to search for
 * Return: value of bit at index, -1 if fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	n >>= index;
	return (n & 1);
}
