#include "holberton.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to factorialize
 * Return: !n
 */

int factorial(int n)
{
	if (n > 1)
	{
		n *= factorial(n - 1);
		return (n);
	}
	else if (n == 1 || n == 0)
		return (1);
	else
		return (-1);
}
