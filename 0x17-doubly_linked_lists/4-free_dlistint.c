#include "lists.h"

/**
 * free_dlistint - Returns the number of elements in a linked dlistint_t list.
 *
 * @head: This is a pointer to doubly linked list
 *
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *node;

    while (head)
    {
        node = head;
        head = head->next;
        free(node);
    }
}
