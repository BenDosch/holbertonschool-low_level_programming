#include "hash_tables.h"

/**
 * hash_table_print -prints a hash table
 *
 * @ht: hash table to use
 *
 * Return: NULL on fail
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **bins, *cur = NULL;
	unsigned long int i;
	int first = 1;


	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}

	bins = ht->array;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (cur = bins[i]; cur != NULL; cur = cur->next)
		{
			if (first == 0)
				printf(", ");
			printf("\'%s\': \'%s\'", cur->key, cur->value);
			first = 0;

		}
	}
	printf("}\n");

}
