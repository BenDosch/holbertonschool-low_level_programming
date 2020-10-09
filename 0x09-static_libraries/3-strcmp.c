#include "holberton.h"

/**
 * _strcmp - compares 2 strings and returns a value according to the first
 * unmatched character, or 0 if they are the same.
 * @s1: string to compate to s2
 * @s2: string s1 is compared to
 * Return: -1 if s1 < s2, 0 if s1 = s2, and 1 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

/*Compare s1 to s2*/
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else if (s1[i] < s2[i])
		return (s1[i] - s2[i]);
	}
	return (0);
}
