#include "holberton.h"

/**
 * _strcpy - coppies a string from the source to destination
 * @dest: destination for copy
 * @src: string to be coppied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(src + i) != '\0'; i++)
	{}
	for (j = 0; j <= i; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
