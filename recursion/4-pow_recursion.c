#include "main.h"
/**
 * _pow_recursion - returns X to the power of y
 * @x: base factor
 * @y: terget vector
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
