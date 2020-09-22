#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day starting at 00:00 to 23:59
 *
 *Return: Always 0, sucess
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (i <= 1 && j <= 9)
					{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
					}
					else if (i == 2 && j <= 3)
					{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
					}
				}
			}
		}
}
