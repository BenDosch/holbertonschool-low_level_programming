#include <stdio.h>

/**
 *main - Entry Point
 *
 *Return: Always (0) Success
 */

int main(void)
{
	int i;
	int j;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
