#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string passed to function
 * Return: none
 */

void rev_string(char *s)
{
	int i, j;
	char tem;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	i = i - 1;
	for (j = 0; j < i; j++, i--)
	{
		tem = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = tem;
	}
}
