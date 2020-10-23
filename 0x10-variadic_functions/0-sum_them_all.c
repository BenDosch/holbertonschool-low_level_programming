#include "variadic_functions.h"

/**
 * sum_them_all - gets the sum of n arguments after n
 * @n: number of arguments to sum
 * Return: 0 if n == 0, else sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
