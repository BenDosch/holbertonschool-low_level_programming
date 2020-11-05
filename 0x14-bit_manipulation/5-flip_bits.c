#include "holberton.h"

/**
 * flip_bits - returns the number of bits that need be change to
 * make the numbers the same
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int sum = 0;

	while (n || m)
	{
		if ((n & 1) ^ (m & 1))
			sum++;
		n >>= 1;
		m >>= 1;
	}
	return (sum);
}
