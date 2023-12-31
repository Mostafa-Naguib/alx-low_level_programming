#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: The pointer of the linked list's head.
 * @n: The number of new_node.
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int x = n;
	listint_t *tmp = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node | !head)
		return (0);

	new_node->n = x;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}


	while (tmp->next != 0)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
