#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * array_range - creates array of ints
 * @min: minimum
 * @max: maximum
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (min <= max)
	{
		ptr[i++] = min++;
	}

	return (ptr);
}
