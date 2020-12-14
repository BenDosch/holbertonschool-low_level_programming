#include "holberton.h"

/**
 * _strspn - returns the number of bytes from start to the first none included
 * char in accept
 * @s: string to check
 * @accept: acceptable charactgers
 * Retrun: distance s is within accept
>>>>>>> 61ef9c11cec236536c169c462962fd7c74aea9ca
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int test;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0, test = 0 ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				test = 1;
		}

		if (test == 0)
			return (i);
	}
	return (i);
}
