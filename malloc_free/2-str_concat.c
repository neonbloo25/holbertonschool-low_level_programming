#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * str_concat - concatenates two strings as one
 * @s1: first string
 * @s2: second string
 * Return: pointer with result
 */
char *str_concat(char *s1, char *s2)
{
	char *x;
	int i, d, n;

	d = 0, n = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		n++;

	x = malloc(sizeof(char) * n);

	if (x == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		x[d++] = s1[i];
	for (i = 0; s2[i]; i++)
		x[d++] = s2[i];
	return (x);
}
