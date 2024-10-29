#include <stdio.h>

/**
 * main - will do a classic Fizz Buzz! Fizz(3) Buzz(5) FizzBuzz(3&5)
 * Return: 0
 */

int main(void)
{
	int fbcount;

	for (fbcount = 1; fbcount <= 100; fbcount++)
	{
		if (((fbcount % 3) == 0) && ((fbcount % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((fbcount % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((fbcount % 5) == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", fbcount);
		if (fbcount != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
