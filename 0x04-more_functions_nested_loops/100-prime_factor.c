#include "holberton.h"
#include <stdio.h>

/**
 * main - gets largest prime factor of num
 *
 * Return: Always 0, sucess
 */

int  main(void)
{
	long int num, fac, tem, maxfac;

	num = 612852475143;


	if (num >= 0)
	{
		for (fac = 2; fac <= num; fac++)
		{
			maxfac = fac;

			if (fac == num)
				break;
			else if	(num % fac == 0)
			{
				tem = fac;
				while (( num != tem) && (num % tem == 0))
				{
					num = num / tem;
					printf("num = %ld\n", num);
				}
			}
		}
		printf("%ld\n", maxfac);
	}
	return (0);
}
