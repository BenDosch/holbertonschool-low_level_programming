#include "holberton.h"

/**
 * *rot13 - applies rot13 encode to string.
 * @s: string passed to function
 * Return: pointer to string passed to function.
 */

char *rot13(char *s)
{
	int i, j;
	char al[] = "ABCDEFGHIJKLMNOPQURSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r13[] = "NOPQURSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
			if (s[i] == al[j])
				s[i] = r13[j];
	}
	return (s);
}
