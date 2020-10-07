#include "holberton.h"

/**
 * _strlen_recursion - retuns the length of string s
 * @s: string to test
 * Return: length of string s
 */

int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s != '\0')
	{
		len += _strlen_recursion(s + 1);
		return (len);
	}

	return (0);
}
