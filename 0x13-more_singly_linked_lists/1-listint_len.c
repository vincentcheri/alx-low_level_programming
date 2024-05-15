#include "lists.h"

/**
 * listint_len - function that returns the no of elements in a list
 * @h: pointer to the list
 * Return: number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		n_nodes++;
		h = h->next;
	}

	return (n_nodes);
}
