#include "lists.h"


int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (*head != NULL)
	{
		pop = *head;
		*head = (*(head))->next;
		n = pop->n;
		free(pop);
		return (n);
	}

	return (0);
}
