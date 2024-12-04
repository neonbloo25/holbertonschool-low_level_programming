#include "lists.h"
/**
 * print_list - prints elements of a list_t list
 * @h: list in question
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	for (n = 0; h; n++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}
	return (n);
}
