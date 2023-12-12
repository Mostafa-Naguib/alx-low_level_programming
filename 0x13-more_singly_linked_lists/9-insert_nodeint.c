#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node
 * at a given position.
 *
 * @head: The pointer of the linked list's head.
 * @idx: The index number.
 * @n: The number of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (!head || !new_node || !*head)
		return (0);

	new_node->n = n;
	new_node->next = NULL;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (tmp = *head; tmp; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
	}

	free(new_node);
	return (0);
}

