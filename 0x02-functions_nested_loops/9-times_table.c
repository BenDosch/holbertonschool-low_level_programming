#include "holberton.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 */

void times_table(void)
{
	int i, j, k;
	char tens, ones;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			tens = '0' + (k / 10);
			ones = '0' + (k % 10);
			if (j == 9 && tens == '0')
				_putchar(ones);
			else if (j == 9 && tens != '0')
			{
				_putchar(tens);
				_putchar(ones);
			}
			else if (tens == '0' && (i * (j + 1)) / 10 != 0)
			{
				_putchar(ones);
				_putchar(',');
				_putchar(' ');
			}
			else if (tens == '0' && (i * (j + 1) / 10 == 0))
			{
				_putchar(ones);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(tens);
				_putchar(ones);
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
