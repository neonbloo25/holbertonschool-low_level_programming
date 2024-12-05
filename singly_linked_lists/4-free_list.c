#include "lists.h"
/**
 * free_list - clears memory used by list
 * @head: address of primary node
 */
void free_list(list_t *head)
{
	list_t *xyz = head;
	list_t *nextNode;

	while (xyz != NULL)
	{
		nextNode = xyz->next;
		free(xyz->str);
		free(xyz);
		xyz = nextNode;
	}
}
