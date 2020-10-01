#include "holberton.h"

/**
 * *leet - encodes the string into 1337
 * @s: string passed to function
 * Return: pointer to string passed to function.
 */

char *leet(char *s)
{
	int i, j;
	char rep[] = {'4', '3', '0', '7', '1'};
	char test[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (test[j] == s[i])
				s[i] = rep[j / 2];
		}
	}
	return (s);
}
