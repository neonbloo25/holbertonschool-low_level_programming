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

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (d = 0; s2[d] != '\0'; d++)
	{}

	x = malloc(sizeof(char) * (i + d + 1));

	if (x == NULL)
		return (NULL);

	for (n = 0; s1[n] != '\0'; n++)
		x[n] = s1[n];
	for (d = 0; s2[d] != '\0'; d++, n++)
		x[n] = s2[d];
	return (x);
}
