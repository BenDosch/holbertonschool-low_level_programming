#include "holberton.h"

/**
 * print_line - draws a stright line lenght n
 * @n: lenth of line
 * Return: none
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (; n > 0; n--)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
