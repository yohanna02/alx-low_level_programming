#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print a list of node list
 * @h: The head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
