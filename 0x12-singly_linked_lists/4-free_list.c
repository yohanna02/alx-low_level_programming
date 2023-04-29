#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Adds a new node at the beginning
 * @head: pointer to the head of the linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next_node;

	while (head != NULL)
	{
		next_node = head;
		head = head->next;
		free(next_node->str);
		free(next_node);
	}
}
