#include "lists.h"
/**
 * list_len - returns number of elements in a list
 * @h: subject in question
 * Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t n;

	for (n = 0; h; n++)
		h = h->next;

	return (n);
}
