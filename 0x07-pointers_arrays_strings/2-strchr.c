#include "holberton.h"

/**
 * _strchr - finds the location of the first occurance of c
 * @s: sting to find c in
 * @c: character to find
 * Return: pointer to location of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
		return (s + i);
}
