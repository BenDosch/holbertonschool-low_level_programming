#include "holberton.h"

/**
 * _puts_recursion - prints a string followed by a new line.
 * @s: string passed to function
 * Return: none
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*(s + 1) == '\0')
		_putchar('\n');
	else
		_puts_recursion(s + 1);
}
