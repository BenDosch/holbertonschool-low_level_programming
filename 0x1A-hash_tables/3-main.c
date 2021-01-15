#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

int main(void)
{
	hash_table_t *ht;
	char *key, *value;

	ht = hash_table_create(1024);
	key = "betty";
	value = "holberton";
	if (hash_table_set(ht, key, value))
		printf("%s added at %s\n", value, key);
	return (EXIT_SUCCESS);
}
