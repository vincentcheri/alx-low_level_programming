#include "lists.h"

/**
 * get_nodeint_at_index - function that finds a node at nth index
 * @head: pointer to the head of a list
 * @index: the position of the node to be found
 * Return: a pointer to a node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *find;
	unsigned int i = 0;

	if (head != NULL)
	{
		find = head;

		while (find != NULL)
		{
			if (i == index)
			{
				return (find);
			}

			find = find->next;
			i++;
		}
	}

	return (NULL);
}
