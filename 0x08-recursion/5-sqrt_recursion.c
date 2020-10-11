#include "holberton.h"

/**
 * test_root - recursively tests if x is the square root of n
 * @n: number to get square root of
 * @x: number to test if root
 * Return: x if root of n, -1 if error
 */

int test_root(int n, int x)
{
	x++;

	if (x * x == n)
		return (x);
	else if (x * x < n)
	{
		x = test_root(n, x);
		return (x);
	}
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the square root of a number only if natural
 * @n: number to get square root of
 * Return: square root of n, -1 if error
 */

int _sqrt_recursion(int n)
{
	int root;

	root = test_root(n, 0);
	return (root);
}
