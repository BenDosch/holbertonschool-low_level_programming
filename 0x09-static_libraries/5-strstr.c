#include "holberton.h"

/**
 * _strstr - finds a substring in a string
 * @haystack: string to search
 * @needle: string to find
 * Return: pointer to location at the start of the substing if in
 * haystack, else null
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
					continue;
				else
					break;
			}
		}

		if (needle[j] == '\0')
			return (haystack + i);
	}
	return ('\0');
}
