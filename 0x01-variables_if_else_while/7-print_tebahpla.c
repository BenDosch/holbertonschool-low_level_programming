#include <stdio.h>

/**
 *main - Entry Point
 *
 *Return: Always (0) Success
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	putchar('\n');
	return (0);
}
