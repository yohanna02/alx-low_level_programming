#include "lists.h"

/**
 * listint_len - count number if nodes
 * @h: The head of the list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
