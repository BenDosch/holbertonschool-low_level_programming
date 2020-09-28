#include "holberton.h"

/**
 * swap_int -  swaps the value of ints pointed to by a and b
 * @a: pointer to an int
 * @b: pointer to an int
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
