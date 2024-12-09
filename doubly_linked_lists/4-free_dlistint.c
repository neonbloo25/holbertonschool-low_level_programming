#include "lists.h"
/**
 * free_dlistint - Clears dlist
 * @head: address of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *xyz = head;
	dlistint_t *nextNode;

	while (xyz != NULL)
	{
		nextNode = xyz->next;
		free(xyz);
		xyz = nextNode;
	}
}
