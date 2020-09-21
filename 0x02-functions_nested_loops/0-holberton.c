#include "holberton.h"

/**
* Main - prints "Holberton" to the terminal
*
* Return: On success 0.
*/

int main(void)
{
	char ch[] = "Holberton";
	int i;

	for (i = 0 ; i < 9 ; i++)
		_putchar(ch[i]);
	_putchar('\n');
	return (0);
}
