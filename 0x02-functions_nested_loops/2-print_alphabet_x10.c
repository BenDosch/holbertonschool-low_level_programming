#include "holberton.h"

/**
* print_alphabet_x10 - prints alpahbet lower a-z followed by a newline.
*
* Return: On success 0.
*/

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
