#include "lists.h"

/**
 * sum_listint - Calculate the sum of the list
 * @head: Head of the list
 * Return: The sum of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *list = head;

	if (head == NULL)
	{
		return (0);
	}
	while (list != NULL)
	{
		sum += list->n;
		list = list->next;
	}
	return (sum);
}
