#include "main.h"
/**
 * print_sign - checks the value of a variable
 * @n: is the value to be compared to 0
 * Return: -1, 0, or 1 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
