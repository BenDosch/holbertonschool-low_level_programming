#include "holberton.h"

/**
 * _memset -  coppies n bytes form memory area src to memory area dest
 * @s: address in memory to start
 * @b: what to copy ingot memory
 * @n: number of bytes to copy src to
 * Return: pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
