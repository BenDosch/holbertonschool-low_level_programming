#include "holberton.h"

/**
 * string_nconcat - concatonates s1 and n bytes of s2 followed by a null byte
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to add from s2
 * Return: ptr to newly allocated memory contiaing concatonated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc(sizeof(s1) + n + 1);
		if (ptr == NULL)
			return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
