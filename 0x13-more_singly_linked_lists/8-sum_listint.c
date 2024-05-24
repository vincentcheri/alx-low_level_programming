#include "lists.h"

/**
 * sum_listint - a function that sum all the int in a list
 * @head: the pointer that points to the head of a list
 * Return: total sum if list is empty return 0
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp = head;

	sum = 0;

	if (temp == NULL)
	{
		return (0);
	}

	else
	{
		while (temp != NULL)
		{
			sum = sum + temp->n;
			temp = temp->next;
		}
	}

	return (sum);
}
