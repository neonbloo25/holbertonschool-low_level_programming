#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - will check the value of second digit of number
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d and is greater than 5\n", lastd);
	}

	else if (lastd == 0)
	{
		printf("Last digit of %d and is 0\n", lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", lastd);
	}

	return (0);
}
