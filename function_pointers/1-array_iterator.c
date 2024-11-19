#include "function_pointers.h"
/**
 * array_iterator - scrolls through array to perform specified action(s)
 * @array: content to be used
 * @size: array element count
 * @action: fP name
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

