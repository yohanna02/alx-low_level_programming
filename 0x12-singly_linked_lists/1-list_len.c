#include "lists.h"

/**
 * list_len - count the number of nodes
 * @h: Head of the linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *current_list = h;

	while (current_list != NULL)
	{
		current_list = current_list->next;
		i++;
	}
	return (i);
}
