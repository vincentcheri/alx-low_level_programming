#include "lists.h"

/**
 * insert_nodeint_at_index - fxn that inserts a node at a particular index
 * @head: points to the head of the list
 * @idx: the index of the list
 * @n: the data to be inserted
 * Return: address of new node inserted or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

    listint_t *new_node, *current;
    unsigned int i;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->next = NULL;


    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    current = *head;

    for (i = 0; i < idx - 1; i++)
    {
        if (current == NULL)
        {
            free(new_node);
            return NULL;
        }
        current = current->next;
    }


    if (current == NULL)
    {
        return NULL;
    }

    new_node->next = current->next;
    current->next = new_node;

    return new_node;
}
