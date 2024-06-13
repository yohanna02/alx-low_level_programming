#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - gets the index for a specific key
 * @key: the key to get the index
 * @size: size of the hash table size
 *
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_hash = hash_djb2(key);

	return (key_hash % size);
}
