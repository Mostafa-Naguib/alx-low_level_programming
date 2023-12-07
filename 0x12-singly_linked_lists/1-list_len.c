#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 *
 * @h: The head of the linked list.
 *
 * Return: returns the number of elements in a linked list.
 */


size_t list_len(const list_t *h)
{
	const list_t *tmp;
	int i = 0;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		i++;
	}
	return (i);
}
