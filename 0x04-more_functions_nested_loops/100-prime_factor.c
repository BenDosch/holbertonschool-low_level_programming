#include "holberton.h"
#include <stdio.h>

/**
 * main - gets largest prime factor of num
 *
 * Return: Always 0, sucess
 */

int  main(void)
{
	unsigned long int num, fac, maxfac;

	num = 612852475143;

	if (num >= 0)
	{
		for (fac = 2; num / maxfac == 1;)
		{
			if (num % fact != 0)
			{
				fac++;
			}
			else
			{
				maxfac = fac;
				num = num / fac;
			}
		}
		printf("%uld\n", maxfac);
	}
	return (0);
}
