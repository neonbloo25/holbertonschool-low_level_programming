#include "main.h"
/**
 * square_check - finds if target has square root
 * @x: comparison parameter
 * @n: target int
 * Return:square root if any, else, error
 */
int square_check(int x, int n)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (square_check(x + 1, n));
}
/**
 * _sqrt_recursion - Returns square root
 * @n: target int
 * Return:square root if any, else, error
 */
int _sqrt_recursion(int n)
{
	int x = 1;

	return (square_check(x, n));
}
