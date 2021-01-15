#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table to use
 *
 * Return: None
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **bins, *cur, *last;
	unsigned long int i;

	bins = ht->array;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		for (cur = bins[i]; cur != NULL;)
		{
			last = cur;
			cur = cur->next;
			free(last->key);
			free(last->value);
			free(last);
		}

	}
	free(bins);
	free(ht);
}
