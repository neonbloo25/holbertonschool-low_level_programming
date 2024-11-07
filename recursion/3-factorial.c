#include "main.h"
/**
 * factorial - Returns the factorial value of a designated number
 * @n: target number
 * Return: Factorial of number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
