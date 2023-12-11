#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 *
 * @h: The head of a linked list
 *
 * Return: returns the number of elements in a linked listint_t list.
 */


size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	int i = 0;

	for (tmp = h; tmp != 0; tmp = tmp->next)
	{
		i++;
	}

	return (i);

}
