#include "hash_tables.h"

/**
 * hash_table_set - adds and element to a hash table
 *
 * @ht: hash table
 * @key: key of element to add
 * @value: value of element to add
 *
 * Return: 1 on sucess, 0 on fail.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t **bins, *cur, *new_ele;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	bins = ht->array;

	for (cur =  bins[index]; cur != NULL; cur = cur->next)
	{
		if (!(strcmp(cur->key, key)))
		{
			free(cur->value);
			cur->value = strdup(value);
			if (cur->value == NULL)
				return (0);
			return (1);
		}
	}

	new_ele = malloc(sizeof(hash_node_t *));
	if (new_ele == NULL)
		return (0);
	new_ele->key = strdup(key);
	if (new_ele->key == NULL)
		free(new_ele);
	new_ele->value = strdup(value);
	if (new_ele->value == NULL)
	{
		free(new_ele);
		free(new_ele->key);
		return (0);
	}
	new_ele->next = bins[index];
	bins[index] = new_ele;

	return (1);
}
