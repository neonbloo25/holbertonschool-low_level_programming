#include "lists.h"
/**
 * print_dlistint - prints elements of a list_t list
 * @h: list in question
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nds;

	for (nds = 0; h; nds++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nds);
}
