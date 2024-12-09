#include "lists.h"
/**
 * add_node_end - appends a new node to the end of the list
 * @head: primary node of the list
 * @str: content of node
 * Return: address of final(subject) element/NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *xyz, *temp;

	xyz = malloc(sizeof(dlistint_t));
	if (xyz == NULL)
		return (NULL);

	xyz->n = n;
	xyz->next = NULL;

	if (*head == NULL)
	{
		xyz->prev = NULL;
		*head = xyz;
		return (xyz);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = xyz;
	xyz->prev = temp;

	return (xyz);
}
