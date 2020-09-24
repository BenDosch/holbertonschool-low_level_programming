#include "holberton.h"

/**
 * print_triangle - print right angle triangel b * h of size
 * @size: b & h of triange.
 * Return: none
 */

void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 0; col <= (size - row); col++)
			{
				_putchar(' ');
			}
			for ( ; col <= size; col++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
}
