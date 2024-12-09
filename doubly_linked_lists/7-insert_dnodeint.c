#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts node at specified point
 * @h: node
 * @idx: insert vector
 * @n: node content
 * Return: address/Null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *xyz;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	xyz = malloc(sizeof(dlistint_t));
	if (xyz == NULL)
		return (NULL);

	xyz->n = n;
	xyz->prev = temp;
	xyz->next = temp->next;
	temp->next->prev = xyz;
	temp->next = xyz;

	return (xyz);
}
