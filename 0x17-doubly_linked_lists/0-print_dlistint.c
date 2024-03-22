#include <lists.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: This is a pointer to doubly linked list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t num = 0;

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        num++;
    }
    return (num);
}
