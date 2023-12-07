#include "lists.h"


/**
 * add_node - Adds a new node at the beginning of a list_t list.
 *
 * @head: This is a pointer to a pointer to a list_t
 * The double pointer (**) suggests that the function can modify
 * the head of the linked list. This is common in linked list operations
 * where the head pointer may need to be updated if a new node is added
 * at the beginning of the list.
 * @str: The string..
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	if (!str)
		return (0);

	len = strlen(str);

	new_node = malloc(sizeof(list_t));

	if (!new_node || !head)
		return (0);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
