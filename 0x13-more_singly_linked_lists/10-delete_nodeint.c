#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - get node at index
 * @head: head of list
 * @index: index of node to get
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	int found = 0;
	listint_t *temp = head;

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

/**
 * delete_nodeint_at_index - delete a node at index
 * @head: the head of the list
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_list, *temp;
	int prev_index;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		prev_list = (*head)->next;
		free(*head);
		*head = prev_list;
		return (1);
	}

	prev_index = index - 1;
	prev_list = get_nodeint_at_index(*head, prev_index);
	if (prev_list == NULL || prev_list->next == NULL)
	{
		return (-1);
	}
	temp = prev_list->next;
	prev_list->next = temp->next;
	free(temp);
	return (1);
}
