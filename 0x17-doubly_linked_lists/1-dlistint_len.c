#include "lists.h"

/**
 * dlistint_len - count doubly linked list
 * @h: doubly linked list head
 * Return: size of doubly linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
