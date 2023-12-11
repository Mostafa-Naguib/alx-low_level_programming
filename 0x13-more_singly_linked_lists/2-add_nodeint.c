#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 *
 * @head: The head of a linked list.
 * @n: The number of the new_node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	int x = n;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node | !head)
		return (0);

	new_node->n = x;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
