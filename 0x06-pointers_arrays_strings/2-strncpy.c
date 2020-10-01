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
	int len_dest;
	int i;

/*Find len of dest*/
	for (i = 0; dest[i] != '\0'; i++)
	{}
	len_dest = i;

/*Test that len_dest >= n*/
	if (len_dest >= n)
	{

/*Copy n bytes of src to dest*/
		for (i = 0; (i < n && src[i] != '\0'); i++)
		{
			dest[i] = src[i];
		}
		if (i < n && src[i] == '\0')
		{
			dest[i] = src[i];
		}
	}

/*Retun pointer to dest*/
	return (dest);
}
