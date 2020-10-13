B#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  concats 2 strings into a newly alocated space in memory.
 * @s1: string to put first
 * @s2: sting to put second
 * Return: pointr to new string, NULL on fail.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i;
	char *combo;

	if (s1 == NULL)
		*s1 = 0;
	if (s2 == NULL)
		*s2 = 0;
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{}
	if (*s1 == 0)
		len1 = 0;
	if (*s2 == 0)
		len2 = 1;
	combo = malloc(sizeof(char) * (len1 + len2 + 1));
	if (combo == NULL)
		return (NULL);
	for (i = 0; i <= (len1 + len2 + 1); i++)
	{
		if (i < len1)
			combo[i] = s1[i];
		else
			combo[i] = s2[i - len1];
	}
	return (combo);
}
