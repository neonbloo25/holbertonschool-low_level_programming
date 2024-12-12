#include "main.h"
/**
 * clear_bit - sets val to 0 at index
 * @n: unsigned long int
 * @index: target element
 * Return: 1/-1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1 << index;

	if (index < sizeof(n) * 8)
	{
		*n = (*n & ~x);
		return (1);
	}

	return (-1);
}
