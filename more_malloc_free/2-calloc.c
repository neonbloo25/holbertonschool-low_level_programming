#include <stdlib.h>
#include <stddef.h>
#include <limits.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: number of elements.
 * @size: size type
 * Return: fail == NULL, win == ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > UINT_MAX / size || size > UINT_MAX / nmemb)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return ((void *)ptr);
}
