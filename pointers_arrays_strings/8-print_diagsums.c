#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - does a thing... and prints it...  trust me
 * @a: its one thing
 * @size: the size of the thing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2, step1, step2;

	sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size - 1); i++)
	{
		step1 = (size + 1) * i;
		sum1 = sum1 + *(a + step1);
	}

	for (j = 1; j <= size; j++)
	{
		step2 = (size - 1) * j;
		sum2 = sum2 + *(a + step2);
	}
	printf("%d, %d\n", sum1, sum2);
}
