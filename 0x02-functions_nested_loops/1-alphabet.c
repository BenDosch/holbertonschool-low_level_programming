#include "holberton.h"

/**
* print_alphabet - prints alpahbet lower a-z followed by a newline.
*
* Return: On success 0.
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}
