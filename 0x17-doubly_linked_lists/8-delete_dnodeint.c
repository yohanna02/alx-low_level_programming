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
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}

		temp = temp->next;
		i++;
	}
	return (NULL);
}

/**
 * delete_dnodeint_at_index - get node at index
 * @head: head of list
 * @index: index of node to get
 * Return: node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev_list, *temp;
	int prev_index;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		prev_list = (*head)->next;
		prev_list->prev = NULL;
		free(*head);
		*head = prev_list;
		return (1);
	}

	prev_index = index - 1;
	prev_list = get_dnodeint_at_index(*head, prev_index);
	if (prev_list == NULL || prev_list->next == NULL)
	{
		return (-1);
	}
	temp = prev_list->next;
	prev_list->next = temp->next;

	if (temp->next != NULL)
	{
		temp->next->prev = prev_list;
	}
	free(temp);
	return (1);
}
