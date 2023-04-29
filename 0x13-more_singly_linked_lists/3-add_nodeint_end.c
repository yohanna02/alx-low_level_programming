#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end if the list
 * @head: pointer to the head of the linked list
 * @n: string to add
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (*head == NULL)
	{
		head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}
