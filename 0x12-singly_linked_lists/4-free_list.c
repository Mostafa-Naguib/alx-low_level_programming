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

	if (!head)
		return;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
