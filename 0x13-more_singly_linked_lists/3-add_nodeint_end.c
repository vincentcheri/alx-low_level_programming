#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add new node to the end of list_t
 * @head: pointer to the pointer of beginning of list_t
 * @n: int to be added
 * Return: New node added
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *current;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	else
	{
		if (*head == NULL)
		{
			*head = n_node;
		}

		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = n_node;
	}

	n_node->next = NULL;
	n_node->n = n;

	return (n_node);
}
