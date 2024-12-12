#include "main.h"
/**
 * get_bit - Finds bit value based on index
 * @index: guideline
 * @n: value
 * Return: value of bit/-1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	x <<= index;

	if (x & n)
		return (1);
	else
		return (0);
}
