#include "holberton.h"

/**
 *_isdigit - tests if c is a digit
 *@c: int of character  passed to function
 *Return: 1 if digit, o if not
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
