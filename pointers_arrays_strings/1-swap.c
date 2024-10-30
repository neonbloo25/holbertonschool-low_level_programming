#include "main.h"
/**
 * swap_int - swaps values of two ints
 * @a: swaps with b
 * @b: swaps with a
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
