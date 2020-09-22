#include "holberton.h"

/**
 *print_last_diget - prints the last diget of a number
 * @n: number passed
 * @d: last diget of n
 *Return: d last diget
 */

int print_last_digit(int n)
{
	int d;

	d = (n % 10);
	if (d < 0)
		d = d * -1;
	_putchar('0' + d);
	return (d);
}
