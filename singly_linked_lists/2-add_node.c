#include "lists.h"
/**
 * add_node - appends a new node to the list
 * @head: primary node of the list
 * @str: content of node
 * Return: address of new element/NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *xyz;

	xyz = malloc(sizeof(list_t));

	if (xyz == NULL)
		return (NULL);

	while (str[i])
		i++;

	xyz->str = strdup(str);
	xyz->len = i;
	xyz->next = *head;
	*head = xyz;

	return (*head);
}
