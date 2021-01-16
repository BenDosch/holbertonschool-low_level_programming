#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 *
 * @size: size of hash table
 *
 * Return: Pointer to newly created hash table, NULL on fail.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}

/**
 * shash_table_set - adds and element to a hash table
 *
 * @ht: hash table
 * @key: key of element to add
 * @value: value of element to add
 *
 * Return: 1 on sucess, 0 on fail.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t **bins = ht->array, *cur;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

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
	return (add_sh_node(ht, key, value, index));
}

/**
 * add_sh_node - adds and element to a hash table
 *
 * @ht: hash table
 * @key: key of element to add
 * @value: value of element to add
 * @index: index of table array to add node to
 *
 * Return: 1 on sucess, 0 on fail.
 */

int add_sh_node(shash_table_t *ht, const char *key,
		const char *value, unsigned long int index)
{
	shash_node_t **bins = ht->array, *cur, *new_ele;

	new_ele = malloc(sizeof(shash_node_t *));
	if (new_ele == NULL)
		return (0);
	new_ele->key = strdup(key);
	if (new_ele->key == NULL)
		free(new_ele);
	new_ele->value = strdup(value);
	if (new_ele->value == NULL)
	{
		free(new_ele->key);
		free(new_ele);
	}
	new_ele->next = bins[index];
	bins[index] = new_ele;
	cur = key_position(ht->shead, key);
	new_ele->sprev = cur;
	if (cur)
	{
		new_ele->snext = cur->snext;
		if (new_ele->next == NULL)
			ht->stail = new_ele;
		cur->snext->sprev = new_ele;
		cur->snext = new_ele;
	}
	else
	{
		new_ele->next = NULL;
		ht->shead = new_ele;
	}
	return (1);
}

/**
 * key_position - finds the ASCII value ordered spot in a doubbly linked list
 * for a key
 * @head: head of list
 * @key: key to check
 * Return: pointer to node at  or NULL if no node at index
 */

shash_node_t *key_position(shash_node_t *head, const char *key)
{
	shash_node_t *current = head;

	while (current)
	{
		if (current->next == NULL)
		{
			if (strcmp(key, current->key) > 0)
				return (current);
			else if (strcmp(key, current->key) <= 0)
				return (current->sprev);
		}
		else if (strcmp(key, current->key) > 0)
			current = current->snext;
		else if (strcmp(key, current->key) <= 0)
			return (current->sprev);
	}
	return (NULL);
}

/**
 * shash_table_get - retrieves a value associated with a key from a hash table
 *
 * @ht: Hash table to use
 * @key: key to find
 *
 * Return: the value associated with the key, NULL on fail
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t **bins, *cur;

	if (ht == NULL || !(strcmp(key, "")) || key == NULL)
		return (NULL);

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

/**
 * shash_table_print - prints a hash table usings its sored linke list
 *
 * @ht: hash table to use
 *
 * Return: none
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *cur = NULL;
	int first = 1;


	if (ht == NULL)
		return;

	printf("{");
	for (cur = ht->shead; cur; cur = cur->snext)
	{
		if (first == 0)
			printf(", ");
		printf("\'%s\': \'%s\'", cur->key, cur->value);
		first = 0;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse using sorted list
 *
 * @ht: hash table to use
 *
 * Return: none
 */

void shash_table_print_rev(const shash_table_t *ht)
{

	shash_node_t *cur = NULL;
	int first = 1;


	if (ht == NULL)
		return;

	printf("{");
	for (cur = ht->stail; cur; cur = cur->sprev)
	{
		if (first == 0)
			printf(", ");
		printf("\'%s\': \'%s\'", cur->key, cur->value);
		first = 0;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 *
 * @ht: hash table to use
 *
 * Return: None
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t **bins, *cur, *last;
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
