#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node from a given index
 * @head: points to the head of the list
 * @index: position of the node to be deleted
 * Return: 1 if it succeeds and -1 if it fails
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = (*(head))->next;
		free(tmp);
		return (1);
	}

	for (i = 0; tmp != NULL && i < index - 1; i++)
	{
		tmp = tmp->next;
	}

	if (tmp == NULL || tmp->next == NULL)
	{
		return (-1);
	}

	node = tmp->next->next;

	free(tmp->next);

	tmp->next = node;

	return (1);
}
