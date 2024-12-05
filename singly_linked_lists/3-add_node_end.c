#include "lists.h"
/**
 * _strlen - lets count this baby
 * @s: string in question
 * Return: string length
 */
int _strlen(const char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
/**
 * add_node_end - appends a new node to the end of the list
 * @head: primary node of the list
 * @str: content of node
 * Return: address of final(subject) element/NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *xyz, *temp = *head;

	xyz = malloc(sizeof(list_t));
	if (xyz == NULL)
		return (NULL);
	
	xyz->str = strdup(str);
	xyz->len = strlen(str);
	xyz->next = NULL;

	if (*head == NULL)
		*head = xyz;

	else
	{
		while (temp->next != NULL)
			temp = temp->next;
	temp->next = xyz;
	}

	return (xyz);
}
