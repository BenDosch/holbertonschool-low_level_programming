#include "holberton.h"

/**
 * _pow_recursion - returns x to the power of y
 * @x: number to raise to the power of y
 * @y: power
 * Return: x ^ y, -1 if error
 */

int _pow_recursion(int x, int y)
{
	if (y > 1)
	{
		y--;
		x *= _pow_recursion(x, y);
		return (x);
	}
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (-1);
}
