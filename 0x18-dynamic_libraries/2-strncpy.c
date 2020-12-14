#include "holberton.h"

/**
 * *_strncpy - Coppy n bytes of str to dest
 * @src: String to copy
 * @dest: Destination of copied protion of str
 * @n: Number of bytes to copy of str to dest
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

/*Copy n bytes of src to dest*/
	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
/*Retun pointer to dest*/
	return (dest);
}
