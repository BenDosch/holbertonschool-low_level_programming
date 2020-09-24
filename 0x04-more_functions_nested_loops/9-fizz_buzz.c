#include "holberton.h"
#include <stdio.h>

/**
 * fizz_buzz - preforms the fizzbuzz test
 *
 * Return: none
 */

void fizz_buzz(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("Fizzbuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num < 100)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - calls fizz_buzz
 *
 * Return: 0 Allways, sucess
 */

int main(void)
{
	fizz_buzz();

	return (0);
}
