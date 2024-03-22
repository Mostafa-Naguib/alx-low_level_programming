#include "lists.h"

/**
 * add_dnodeint_end - Returns the number of elements in a linked dlistint_t list.
 *
 * @head: This is a pointer to doubly linked list
 * @n: This is a pointer to doubly linked list
 *
 * Return: The number of elements in a linked dlistint_t list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t)), *node;

    if (!head || !new)
        return (new ? free(new), NULL: NULL);

    new->n = n;
    new->prev = NULL;

    if (!*head)
    {
        *head = new;
        new->next = NULL;
    }
    else
    {
        node = *head;
        while (node -> next)
            node = node->next;

        node->next = new;
        new->prev = node;
    }

    return (new);
}
