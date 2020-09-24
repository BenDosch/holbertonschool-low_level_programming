#include "holberton.h"

/**
 * print_most_numbers - prints 0 to 9 followed by newline
 *
 *Return: none
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
