#include "holberton.h"

/**
 * *string_toupper - changes all the lowercase letters to uppercase
 * @s: string passed to function
 * Return: pointer to string passed to function.
 */

char *string_toupper(char *s)
{
	int i;
	int to_upper = 'a' - 'A';

/*Loop through string*/
	for (i = 0; s[i] != '\0'; i++)
	{
/*Test if lowercase, if true change to uppercase*/
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= to_upper;
		}
	}
/*Return pointer to string*/
	return (s);
}
