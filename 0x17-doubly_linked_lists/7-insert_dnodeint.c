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
	new_list->next = NULL;
	new_list->prev = NULL;
	if (idx == 0)
	{
		new_list->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_list;
		}
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
	if (prev_list->next != NULL)
	{
		prev_list->next->prev = new_list;
	}
	prev_list->next = new_list;
	new_list->prev = prev_list;
	return (new_list);
}
