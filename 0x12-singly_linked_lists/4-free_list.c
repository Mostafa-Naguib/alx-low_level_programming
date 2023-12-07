#include "lists.h"

/**
 * free_list - A function that frees a list_t list.
 *
 * @head: The head of the linked list.
 *
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
