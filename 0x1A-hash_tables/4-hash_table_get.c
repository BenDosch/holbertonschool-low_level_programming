#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key from a hash table
 *
 * @ht: Hash table to use
 * @key: key to find
 *
 * Return: the value associated with the key, NULL on fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **bins, *cur;

	if (ht == NULL || !(strcmp(key, "")) || key == NULL)
		return (NULL)

	index = key_index((const unsigned char *)key, ht->size);
	bins = ht->array;

	if (bins[index] != NULL)
	{
		for (cur =  bins[index]; cur != NULL; cur = cur->next)
		{
			if (strcmp(cur->key, key) == 0)
				return (cur->value);
		}
	}

	return (NULL);
}
