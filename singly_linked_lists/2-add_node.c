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

	for (i = 0; str[i] != '\0'; i++)
		;

	struct Node *xyz = (struct Node*)malloc(sizeof(struct Node));
	{
		xyz->str = str;
		xyz->len = i;
		xyz = xyz->next;
	}
	return (&xyz);
}
