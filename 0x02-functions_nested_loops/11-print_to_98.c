#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - prints all natural numbers from n to 98
 *
 * @n: int to start at
 *
 * Return: Always 0, sucess.
 */

void print_to_98(int n)
{
	if (n >= 99)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	else if (n <= 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	printf("%d\n", n);
}
