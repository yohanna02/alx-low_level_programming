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
 * insert_nodeint_at_index - Insert node at index
 * @head: head of list
 * @idx: Index of node to insert
 * @n: value of node to insert
 * Return: Pointer to inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next_list;
	listint_t *prev_list;
	listint_t *new_list = malloc(sizeof(listint_t));
	unsigned int prev_index = 0;

	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->n = n;
	new_list->next = NULL;
	if (head == NULL || *head == NULL)
	{
		free(new_list);
		return (NULL);
	}
	if (idx == 0)
	{
		new_list->next = *head;
		*head = new_list;
		return (new_list);
	}
	else
	{
		prev_index = idx - 1;
		prev_list = get_nodeint_at_index(*head, prev_index);
		if (prev_list == NULL)
		{
			free(new_list);
			return (NULL);
		}
		next_list = prev_list->next;
		prev_list->next = new_list;
		new_list->next = next_list;
		return (new_list);
	}
}
