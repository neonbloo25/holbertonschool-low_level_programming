#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * create_array - makes array
 * @size: size of array
 * @c: Char it is initialized with
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *xyz;
	unsigned int i;

	if (size == 0)
		return (NULL);

	xyz = malloc(size * sizeof(*xyz));
	if (xyz == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		xyz[i] = c;
	return (xyz);
}
