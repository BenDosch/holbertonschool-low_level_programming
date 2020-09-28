#include <stdio.h>

/**
 * main - prints the first 50 fib
 *
 * Return: 0 Always, sucess
 */

int main(void)
{
	int i;
	long int first, second, fib;

	first = 1;
	second = 2;

	printf("1, 2");
	for (i = 0; i < 50; i++)
	{
		fib = first + second;
		first = second;
		second = fib;
		printf(" ,%ld", fib);
	}
	putchar('\n');
	return (0);
}
