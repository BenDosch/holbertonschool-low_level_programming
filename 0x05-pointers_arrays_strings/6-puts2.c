#include "holberton.h"

/**
 * puts2 - prints odd characters of string
 * @str: string passed to fucntion.
 * Return: none
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
