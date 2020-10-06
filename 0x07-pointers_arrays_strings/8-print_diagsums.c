#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonal sums of maxtrix forward then back diag
 * @a: matrix
 * @size: size of a
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int i;
	int fd = 0;
	int bd = 0;

	if (size <= 0)
		printf("0, 0\n");
	else
	{
		for (i = 0; i < size; i++)
		{
			fd += *(a + ((i * size) + i));
			bd += *(a + ((i * size) + (size - 1 - i)));
		}
		printf("%d, %d\n", fd, bd);
	}
}
