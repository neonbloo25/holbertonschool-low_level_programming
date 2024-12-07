#include "lists.h"
/**
 * add_dnodeint - creates a new head node
 * @head: location
 * @n: content
 * Return: NULL/address of node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *xyz;

	xyz = malloc(sizeof(dlistint_t));
	if (xyz == NULL)
		return (NULL);

	xyz->n = n;
	xyz->prev = NULL;
	xyz->next = *head;
	*head = xyz;

	return (*head);
}
