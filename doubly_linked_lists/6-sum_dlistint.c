#include "lists.h"
/**
 * sum_dlistint - adds up all the content of a list
 * @head: target list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
