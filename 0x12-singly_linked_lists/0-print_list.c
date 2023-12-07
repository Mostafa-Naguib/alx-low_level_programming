#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: The head of linked list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *tmp;
	int i = 0;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		if (tmp->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", tmp->len, tmp->str);
		}
		i++;
	}
	return (i);
}
