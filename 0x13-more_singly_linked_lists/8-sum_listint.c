#include "lists.h"

/**
 * sum_listint - a function that sum all the int in a list
 * @head: the pointer that points to the head of a list
 * Return: total sum if list is empty return 0
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	else
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}

	return (sum);
}
