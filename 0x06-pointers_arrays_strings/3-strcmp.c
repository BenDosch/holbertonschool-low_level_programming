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
	int cmp;

/*Compare s1 to s2*/
	for (i = 0; s1[i] == s2[i]; i++)
	{
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		cmp = 0; break;
	}
	}
	if (s1[i] > s2[i])
		cmp = 1;
	else if (s1[i] < s2[i])
			cmp = -1;
/*Return -1 if s1 < s2, 0 if s1 = s2, and 1 if s1 > s2*/
	return (cmp);
}
