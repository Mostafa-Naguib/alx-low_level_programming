#include "lists.h"

/**
 * add_dnodeint - Returns the number of elements in a linked dlistint_t list.
 *
 * @head: This is a pointer to doubly linked list
 * @n: This is a pointer to doubly linked list
 *
 * Return: The number of elements in a linked dlistint_t list.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));

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
        new->next = *head;
        (*head)->prev = new;
        *head = new;
    }

    return (new);
}
