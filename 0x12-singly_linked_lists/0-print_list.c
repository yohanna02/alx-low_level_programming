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

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (-1);
	}

	while (1)
	{
		if (current_list->str == NULL)
		{
			i++;
			printf("[0] (nil)\n");
			if (current_list->next != NULL)
			{
				current_list = current_list->next;
				continue;
			}
			else
				break;
		}
		else
		{
			i++;
			printf("[%u] %s\n", current_list->len, current_list->str);
			if (current_list->next != NULL)
			{
				current_list = current_list->next;
				continue;
			}
			else
				break;
		}
	}
	return (i);
}
