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
	hash_node_t **bins, *cur;
	hash_node_t *new_ele;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);

	new_ele = malloc(sizeof(hash_node_t *));
	if (new_ele == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	bins = ht->array;
	new_ele->key = strdup(key);
	new_ele->value = strdup(value);
	new_ele->next = NULL;

	if (bins[index] == NULL)
		bins[index] = new_ele;
	else
	{
		for (cur =  bins[index]; cur != NULL; cur = cur->next)
		{
			if (!(strcmp(cur->key, key)))
			{
				cur->value = strdup(value);
				free(new_ele);
				return (1);
			}
		}
		new_ele->next = bins[index];
		bins[index] = new_ele;
	}

	return (1);
}
