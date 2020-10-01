#include "holberton.h"

/**
 * reverse_array - reverese the contenst of an array of n intigers
 * @a: array to be reversed
 * @n: lenght of a
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i;
	int tem;

/*Loop through half of the array*/
	for (i = 0; i <= (n - 1) / 2 && n != 0; i++)
	{
/*Store lower value in tem and assign swaped values*/
		tem = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = tem;
	}
}
