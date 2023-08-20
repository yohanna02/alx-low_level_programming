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

/**
 * insert_dnodeint_at_index - Insert node at index
 * @h: head of list
 * @idx: Index of node to insert
 * @n: value of node to insert
 * Return: Pointer to inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev_list;
	dlistint_t *new_list = malloc(sizeof(dlistint_t));

	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->n = n;
	if (h == NULL)
	{
		free(new_list);
		return (NULL);
	}
	if (idx == 0)
	{
		new_list->next = *h;
		*h = new_list;
		return (new_list);
	}
	prev_list = get_dnodeint_at_index(*h, idx - 1);
	if (prev_list == NULL)
	{
		free(new_list);
		return (NULL);
	}
	new_list->next = prev_list->next;
	prev_list->next = new_list;
	return (new_list);
}
