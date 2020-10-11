/**
* _islower - tackes a character "c" and checks if character is lowercase
* @c: The character to print
* Return: On success 1, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
