#include "main.h"
/**
 * prime_check - checks if number is prime
 * @n: target num
 * @x: cross ref param
 * Return: 1 or 0
 */
int prime_check(int x, int n)
{
	if (n < 1)
		return (0);
	else if (x * x > n && n != 1)
		return (1);
	else if (x * x == n || n <= 1)
		return (0);
	return (prime_check(x + 1, n));
}
/**
 * is_prime_number - checks if prime
 * @n: target number
 * Return: result
 */
int is_prime_number(int n)
{
	int x = 1;

	return (prime_check(x, n));
}
