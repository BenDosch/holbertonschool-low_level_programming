#include "variadic_functions.h"

/**
 * print_all - prints anything matching the format given to it.
 * @format: list of types of arguments passed to function
 * Return: none
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, first = 1;
	char *str;

	va_start(valist, format);
	while (*(format + i))
	{
		if (first != 1)
			printf(", ");
		first = 0;
		switch (*(format + i))
		{
		case 'c':
			printf("%c",  va_arg(valist, int));
			break;
		case 'i':
			printf("%i",  va_arg(valist, int));
			break;
		case 'f':
			printf("%f",  va_arg(valist, double));
			break;
		case 's':
			str = va_arg(valist, char *);
				if (str == NULL)
				{
					printf("(nill)");
					break;
				}
			printf("%s", str);
			break;
		default:
			first = 1;
			break;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
