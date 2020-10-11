#include "holberton.h"

/**
 * check_if_factor - checks if x is a factor of n
 * @n: number to check
 * @x: factor to test
 * Return: 1 if no factors found, 0 if factor found
 */

int check_if_factor(int n, int x)
{
	if (x == 1)
		return (1);
	else if (n % x == 0)
		return (0);
	return (check_if_factor(n, (x - 1)));
}

/**
 * is_prime_number - checks if n is prime
 * @n: number to check
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (check_if_factor(n, (n - 1)));
}
