#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 *
 * @key: key to index
 * @size: size of the array of the hash table
 *
 *Return: index as unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = (hash_djb2(key) % size);

	return (index);
}
