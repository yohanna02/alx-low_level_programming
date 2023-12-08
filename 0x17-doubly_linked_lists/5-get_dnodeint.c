#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of list
 * @index: index of node to get
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	int found = 0;
	dlistint_t *temp = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (temp != NULL)
	{
		found = 0;
		if (i == index)
		{
			found = 1;
			break;
		}

		temp = temp->next;
		i++;
	}
	if (found)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
