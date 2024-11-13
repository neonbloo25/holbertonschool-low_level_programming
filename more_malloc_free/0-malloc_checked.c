#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount to reserve
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
