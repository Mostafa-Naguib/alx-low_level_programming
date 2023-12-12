#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index of a listint_t linked list...
 *
 * @head: The pointer of the linked list's head...
 * @index: The index's number...
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *tmp_old;
	unsigned int i = 0;

	if (!head | !*head)
		return (-1);

	if (!index)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}

	while (tmp)
	{
		if (i == index)
		{
			tmp_old->next = tmp->next;
			free(tmp);
			return (1);
		}
		i++;
		tmp_old = tmp;
		tmp = tmp->next;
	}
	return (-1);
}
