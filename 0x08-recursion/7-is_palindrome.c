#include "holberton.h"

/**
 * get_end - gets last non-null character
 * @s: string
 * Return: address of last non-null charecter
 */

char *get_end(char *s)
{
	if (*(s + 1) != '\0')
		return (get_end(s + 1));
	return (s);
}

/**
 * compare_s_e - compares start and end of string then moves in
 * @s: start
 * @e: end
 * Return: 1 if the same all the way through, 0 if not.
 */

int compare_s_e(char *s, char *e)
{
	if (s >= e)
		return (1);
	else if (*s != *e)
		return (0);
	else
		return (compare_s_e((s + 1), (e - 1)));
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string passed to function
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	char *e;

	if (*s == '\0')
		return (1);

	e = get_end(s);

	return (compare_s_e(s, e));
}
