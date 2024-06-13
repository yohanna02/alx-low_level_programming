#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - insert item in hash table
 * @ht: hash table to insert node
 * @key: key of the item to insert
 * @value: value of the item to insert
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *new_value;
	char *new_key;
	unsigned long int index = 0;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	hash_node_t *prev_node;
	int key_len = strlen(key);

	if (ht == NULL || key_len == 0 || new_node == NULL)
		return (0);
	new_value = strdup(value);
	if (new_value == NULL)
	{
		free(new_node);
		return (0);
	}
	new_key = strdup(key);
	if (new_key == NULL)
	{
		free(new_node);
		free(new_value);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	new_node->key = new_key;
	new_node->value = new_value;
	if (ht->array[index] != NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1);
	}
	prev_node = ht->array[index];
	new_node->next = prev_node;
	ht->array[index] = new_node;
	return (1);
}
