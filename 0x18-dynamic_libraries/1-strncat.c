#include "holberton.h"

/**
 * *_strncat - Concatenates n bytes of src to dest. Does not add \0 if src has
 * more than n bytes.
 * @src: String to dest
 * @dest: String to be added to
 * @n: Number of bytes to add
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

/*Find \0 of dest*/
	for (i = 0; dest[i] != '\0'; i++)
	{}

/*Replace \0 of dest w/ src[0] & continue addding until src[n] = \0*/
	for (j = 0; (n > 0 && j < n); j++)
	{
		dest[i + j] = src[j];

		/*End early if src has less than n bytes*/
		if (src[j] == '\0')
		{
			break;
		}
	}
/*Retrun pointer to restuling string*/
	return (dest);
}
