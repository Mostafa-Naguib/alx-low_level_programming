#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns
 * the nth node of a listint_t linked list.
 *
 * @head: The pointer of the linked list's head.
 * @index: The index number.
 *
 * Return: If the node does not exist, return NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	if (!head)
		return (0);

	for (tmp = head; tmp && i < index; tmp = tmp->next, i++)
		;

	return (tmp);
}
