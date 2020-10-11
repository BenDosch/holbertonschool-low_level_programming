#include "holberton.h"

/**
 * _atoi - converts a string to an intiger.
 * @s: string passed to function
 * Return: first int in string.
 */

int _atoi(char *s)
{
	int i;
	int ret = 0;
	int neg = 1;
	int numstart = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '-')
		{
			neg *= -1;
		}
		if (numstart == 0)
		{
			if ((*(s + i) >= '0') && (*(s + i) <= '9'))
			{
				numstart = i;
				break;
			}
		}
	}
	for (; (s[numstart] >= '0') && (s[numstart] <= '9'); numstart++)
	{
		if ((ret <= 9) && (ret >= 0))
		{
			ret *= neg;
		}
		ret *= 10;
		if (ret < 0)
		{
			ret -= (s[numstart] - '0');
		}
		else
		{
			ret += (s[numstart] - '0');
		}
	}
	return (ret);
}
