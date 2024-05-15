#include "lists.h"

/**
 * print_listint - a function that prints all element of a list
 * @h: pointer to the elements of lists
 * Return: count of the nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}

	return (n_nodes);
}
