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
	hash_node_t *new_node = NULL, *prev_node = NULL;
	char *new_key = NULL;
	char *new_value = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	if (strlen(key) == 0)
	{
		free(new_node);
		return (0);
	}
	new_key = strdup(key);
	if (new_key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_value = strdup(value);
	if (new_value == NULL)
	{
		free(new_node);
		free(new_key);
		return (0);
	}
	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	prev_node = ht->array[index];
	if (prev_node == NULL)
	{
		prev_node = new_node;
		return (1);
	}
	while(1)
	{
		if (strcmp(prev_node->key, key) == 0)
		{
			free(prev_node->value);
			prev_node->value = new_value;
			return (1);
		}
		prev_node = prev_node->next;
		if (prev_node == NULL)
			break;
	}
	prev_node = ht->array[index];
	new_node->next = prev_node;
	ht->array[index] = new_node;
	return (1);
}
