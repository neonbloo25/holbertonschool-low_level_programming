#include "main.h"
#include <stdio.h>
/**
 * print_array - prints a whole array of ints
 * @a: Array in question
 * @n: Number of slots in array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
			printf("%d", a[i]);
	printf("\n");
}
