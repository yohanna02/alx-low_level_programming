#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of the list
 * @head: Head of the list
 * Return: The sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *list = head;

	if (head == NULL)
	{
		return (sum);
	}
	while (list != NULL)
	{
		sum += list->n;
		list = list->next;
	}
	return (sum);
}
