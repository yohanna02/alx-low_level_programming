#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes the head of the list
 * @head: double pointer to the head
 * Return: 1 success, 0 error
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
