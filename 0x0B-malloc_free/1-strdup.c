#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  duplicates a string into a newly alocated space in memory.
 * @str: string to duplicate
 * Return: pointr to new string, NULL on fail.
 */

char *_strdup(char *str)
{
	unsigned int len, i;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
	{}
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}
