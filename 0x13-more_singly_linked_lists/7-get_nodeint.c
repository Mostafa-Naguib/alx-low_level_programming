#include "lists.h"


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *tmp;
    unsigned int i = 0;

    if (!head)
        return (0);
    
    for (tmp = head; tmp && i < index; tmp = tmp->next, i++)
        ;
    
    return (tmp);
}
