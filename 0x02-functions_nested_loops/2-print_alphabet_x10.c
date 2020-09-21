#include "_putchar.c"

/**
* Main - prints alpahbet lower a-z followed by a newline.
*
* Return: On success 0.
*/

int main(void)
{
	char ch;
	int i;
	for(i = 0; i <= 9; i++)
	{
		for(ch = 'a' ; ch <= 'z' ; ch++)
			_putchar(ch);
		_putchar('\n');
	}
	return (0);
}
