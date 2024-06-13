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
	char *new_value = malloc(sizeof(char) * (strlen(value) + 1));
	char *new_key;
	unsigned long int index = 0;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	hash_node_t *prev_node;
	int key_len = strlen(key);

	if (ht == NULL || key_len == 0 || new_node == NULL)
		return (0);
	new_key = malloc(sizeof(char) * key_len);
	if (new_key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	strcpy(new_value, value);
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
