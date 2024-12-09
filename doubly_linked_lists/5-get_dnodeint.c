#include "lists.h"
/**
 * get_dnodeint_at_index - locates specific node
 * @head: List
 * @index: Target entry
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0 ; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
