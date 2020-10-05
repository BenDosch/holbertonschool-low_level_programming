#include "holberton.h"

/**
 * print_chess - prints a chess board
 * @a: 2d array containg chessboard
 * Return: none
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0, j = 0; i < 8 || j < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
