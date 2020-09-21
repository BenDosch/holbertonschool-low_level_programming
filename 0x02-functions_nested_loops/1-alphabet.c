#include "_putchar.c"

/**
* Main - prints alpahbet lower a-z followed by a newline.
*
* Return: On success 0.
*/

int main(void)
{
	char ch;
	for(ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
