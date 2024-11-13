#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * string_nconcat - does thing
 * @s1: var 1
 * @s2: var 2
 * @n: var 3
 * Return: stuff
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x, d;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (d = 0; s2[d]; d++)
		;

	if (n > d)
		n = d;

	x = i + n;

	ptr = malloc(x + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	d = 0;

	while (i < x)
	{
		ptr[i] = s2[d];
		i++, d++;
	}
	ptr[x] = '\0';
	return (ptr);
}
