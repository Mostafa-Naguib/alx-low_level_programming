#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 *
 * @h: This is a pointer to doubly linked list
 *
 * Return: The number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
    size_t num = 0;

    while (h)
    {
        h = h->next;
        num++;
    }
    return (num);
}
