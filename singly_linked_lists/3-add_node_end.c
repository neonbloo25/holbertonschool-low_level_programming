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
 * add_node - appends a new node to the list
 * @head: primary node of the list
 * @str: content of node
 * Return: address of new element/NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *xyz;

	xyz = malloc(sizeof(list_t));
	if (xyz == NULL)
		return (NULL);
	xyz->str = strdup(str);
	xyz->len = _strlen(str);
	xyz->next = *head;
	*head = xyz;

	return (*head);
}

/**
 * add_node_end - appends a new node to the end of the list
 * @head: primary node of the list
 * @str: content of node
 * Return: address of final(subject) element/NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *xyz = add_node(head, str);

	if (*head == NULL)
		*head = xyz;
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
	temp->next = xyz;
	}
	return (xyz);
}
