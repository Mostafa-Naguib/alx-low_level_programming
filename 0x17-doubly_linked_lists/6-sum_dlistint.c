#include "lists.h"

/**
 * sum_dlistint - Returns the number of elements in a linked dlistint_t list.
 *
 * @head: This is a pointer to doubly linked list
 *
 * Return: int sum of values
 */

int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head)
    {
        sum += head->n;
        head = head->next;
    }
    return (sum);
}
