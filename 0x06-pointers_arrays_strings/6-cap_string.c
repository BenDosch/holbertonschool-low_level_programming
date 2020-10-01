#include "holberton.h"

/**
 * *cap_string - Capitalizes all words in string s
 * @s: string passed to function
 * Return: pointer to string passed to function.
 */

char *cap_string(char *s)
{
	int i, j;
	int to_upper = 'a' - 'A';
	char b[13];
	char p;

	b[0] = ',';
	b[1] = ';';
	b[2] = '.';
	b[3] = '!';
	b[4] = '?';
	b[5] = '"';
	b[6] = '(';
	b[7] = ')';
	b[8] = '{';
	b[9] = '}';
	b[10] = ' ';
	b[11] = '\t';
	b[12] = '\n';

/*Loop through string*/
	for (i = 0; s[i] != '\0'; i++)
	{
		p = s[i - 1];

/*test if element is the first letter of a new word*/
		for (j = 0; j < 13; j++)
		{
/*Test if lowercase, if true change to uppercase*/
			if ((s[i] >= 'a' && s[i] <= 'z' && p == b[j]))
			{
				s[i] -= to_upper;
				break;
			}
			else if (s[i] >= 'a' && s[i] <= 'z' && i == 0)
			{
				s[i] -= to_upper;
				break;
			}
		}
	}
/*Return pointer to string*/
	return (s);
}
