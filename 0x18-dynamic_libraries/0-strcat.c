#include "holberton.h"

/**
 * *_strcat - Concatenates src to dest
 * @src: String to dest
 * @dest: String to be added to
 * Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

/*Find \0 of dest*/
	for (i = 0; dest[i] != '\0'; i++)
	{}
/*Replace \0 of dest w/ src[0] & continue addding until src[n] = \0*/
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	/*Add \0*/
	dest[i + j] = src[j];
/*Retrun pointer to restuling string*/
	return (dest);
}
