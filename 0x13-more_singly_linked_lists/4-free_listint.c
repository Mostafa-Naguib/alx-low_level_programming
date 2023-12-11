#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 *
 * @head: The head of the linked list.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
