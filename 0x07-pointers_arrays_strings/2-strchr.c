#include "holberton.h"

/**
 * _strchr - finds the location of the first occurance of c
 * @s: sting to find c in
 * @c: character to find
 * Return: pointer to location of c
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
		return (s);
}
