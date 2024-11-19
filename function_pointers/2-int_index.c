#include "function_pointers.h"
/**
 * int_index - scans array for int match
 * @array: the subject
 * @size: the subject's number of contents
 * @cmp: the target
 * Return: first matching index entry in ptr / -1 for fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	return (-1);
}
