#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the number of elements in a linked dlistint_t list.
 *
 * @head: This is a pointer to doubly linked list
 * @index: This is a pointer to doubly linked list
 *
 * Return: The number of elements in a linked dlistint_t list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;

    while (head)
    {
        if (i == index)
            return (head);

            head = head->next;
            i++;
    }
    return (NULL);
}

