#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed to it seprated by a string
 * @separator: string to be printed between numbers
 * @n: number of arguments to be printed
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int num;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (separator != NULL && (i + 1) < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
