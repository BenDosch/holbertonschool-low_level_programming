#include "holberton.h"

/**
 * shift_1 - shifts s1 until = to s2
 * @s1: string 1
 * @s2: string 2
 * Return: address of shifted s1
 */

char * shift_1(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (shift_1(s1 + 1, s2));
	return (s1);
}

/**
 * shift_2 - shifts 2 past *
 * @s2: string to shift
 * Return: shifted addresss of s2
 */

char * shift_2(char *s2)
{
	if (*s2 == '*')
		return (shift_2((s2 + 1)));

	return (s2);
}

/**
 * test - tests if s1 = s2
 * @s1: string 1
 * @s2: string 2
 * Retrun: 1 if same, 0 false
 */

int test(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
	{
		s2 = shift_2(s2);
		s1 = shift_1(s1, s2);
		return (test((s1 + 1), (s2 + 1)));
	}
	else if (*s1 == *s2)
		return (test((s1 + 1), (s2 + 1)));
	return (0);
}

/**
 * wildcmp - runs recursive test on s1 and s2 to see if they match
 * @s1: sting to test
 * @s2: stirng potentialy with * to test
 * Return: 1 if they match 0 if they don't
 */

int wildcmp(char *s1, char *s2)
{
	return (test(s1, s2));
}
