#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - gets the coresponding op function basied on s
 * @s: opperator to determine function
 * Return: pointer to function determined by s
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5 && strcmp(s, ops[i].op))
	{
		i++;
	}
	if (i == 5)
		return (NULL);
	return (ops[i].f);
}
