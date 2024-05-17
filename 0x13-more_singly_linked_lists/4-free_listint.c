#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: pointer to the first node of the list
 * Return: returns nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp_p;

	while (head != NULL)
	{
		temp_p = head;
		head = head->next;
		free(temp_p);
	}
}
