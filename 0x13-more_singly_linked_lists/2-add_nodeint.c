#include "lists.h"

/**
 * add_nodeint - function that adds node at the beginning of a list
 * @head: pointer to list
 * @n: data
 * Return: a pointer to the first node of the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
}
