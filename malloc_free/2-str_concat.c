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
	int i, d, n, y;

	d = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (d = 0; s2[d] != '\0'; d++)
		;

	x = malloc(sizeof(char) * (i + d + 1));

	if (x == NULL)
		return (NULL);

	for (n = 0; s1[n] != '\0'; n++)
		x[n] = s1[n];
	for (y = 0; s2[y] != '\0'; y++, n++)
		x[n] = s2[y];
	x[n] = '\0';
	return (x);
}
