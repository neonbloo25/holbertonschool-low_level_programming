#include "main.h"
/**
 * flip_bits - returns number of bits required to flip to get from one number to another
 * @n: unsigned long int A
 * @m: unsigned long int B
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = 0, index;

	index = n ^ m;

	while (index > 0)
	{
		if (index & 1)
			x++;
		index >>= 1;
	}
	return (x);
}
