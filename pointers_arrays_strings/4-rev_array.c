#include "main.h"
/**
 * reverse_array - does as says on cover
 * @a: array in question
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i <= n--; i++)
	{
		x = a[i];
		a[i] = a[n];
			a[n] = x;
	}
}
