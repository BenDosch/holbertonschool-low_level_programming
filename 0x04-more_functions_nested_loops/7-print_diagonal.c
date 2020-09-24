#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line n long
 * @n: lenght of line
 * Return: none
 */

void print_diagonal(int n)
{
	int row, col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			if (row != 0)
			{
				for (col = 0; col <= (row - 1); col++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
