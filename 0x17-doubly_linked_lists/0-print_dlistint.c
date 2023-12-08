#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print doubly linked list
 * @h: doubly linked list
 * Return: size of doubly linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
