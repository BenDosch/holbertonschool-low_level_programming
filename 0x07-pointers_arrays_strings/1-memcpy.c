#include "holberton.h"

/**
 * _memcpy - coppies n bytes form src memory to dest memory.
 * @dest: destination to copy 2
 * @src: memory area to copy from.
 * @n: number of bytes to write to.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
