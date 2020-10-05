#include "holberton.h"
#include <stdio.h>

/**
 *
 *
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int fd, bd = 0;

	for (i = 0; i < size; i++)
	{
		fd += *(a + ((i * size) + i));
		bd += *(a + ((i * size) + (size - 1 - i)));
	}
	printf("%d, %d\n", fd ,bd);
}
