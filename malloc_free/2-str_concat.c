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

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{}

	for (d = 0; s2[d] != '\0'; d++)
	{}

	y = i + d;

	x = malloc(y * sizeof(*x) + 1);

	d = 0;

	for (n = 0; n == y; n++)
	{
		if (n <= i)
			x[n] = s1[n];
		else if (n > i)
		{
			x[n] = s2[d];
			d++;
		}
	}
	return (x);
}
