#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free link list
 * @head: double pointer to head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		*head = NULL;
	}
}
