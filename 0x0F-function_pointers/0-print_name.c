#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name to be printer
 * @f: pointer to function to be applied to the name to be printed
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	f(name);
}
