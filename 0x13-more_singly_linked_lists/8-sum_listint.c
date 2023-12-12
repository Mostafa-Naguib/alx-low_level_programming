#include "lists.h"

/**
 * sum_listint - a function that returns the sum
 * of all the data (n) of a listint_t linked list.
 *
 * @head: The head of a linked list
 *
 * Return: The sum of linked list's n
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	for (tmp = head; tmp != 0; tmp = tmp->next)
	{
		sum += tmp->n;
	}

	return (sum);
}
