#include "lists.h"
/**
 * dlistint_len - Returns length of a list
 * @h: subject list
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	for (len = 0; h; len++)
	{
		h = h->next;
	}

	return (len);
}
