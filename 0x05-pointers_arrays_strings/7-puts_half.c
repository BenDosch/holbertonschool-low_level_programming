#include "holberton.h"

/**
 * puts_half - prints half of the string
 * @str: string passed to fucntion
 * Return: none
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
	}
	i--;
	if (i % 2 != 0)
	{
		i--;
	}
	for (i = i / 2; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
