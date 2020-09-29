#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of aray a
 * @a: array passed to function
 * @n: number of elements to be printed
 * Return: none
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
		printf("%d", *a);
	for (i = 1; i < n; i++)
	{
		printf(", %d", *(a + i));
	}
	printf("\n");
}
