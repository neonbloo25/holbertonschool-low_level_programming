#include "main.h"
/**
 * flip_bits - returns bits required to flip
 * @n: unsigned long int A
 * @m: unsigned long int B
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, i;

	x = 0;

	i = n ^ m;

	while (i > 0)
	{
		if (i & 1)
			x++;
		i >>= 1;
	}
	return (x);
}
