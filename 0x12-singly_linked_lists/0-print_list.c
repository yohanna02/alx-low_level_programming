#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the linked list
 * @h: the linked list to print
 * Return: number of node printed
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *current_list = h;

	if (current_list == NULL)
	{
		printf("[0] (nil)\n");
		return (-1);
	}

	while (current_list != NULL)
	{
		printf("[%d] %s\n", current_list->len, current_list->str);
		current_list = current_list->next;
		i++;
	}
	return (i);
}
