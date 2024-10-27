#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - does as it says on the cover
 * @x: will be trimmed down to its last digit
 *
 * Return: first digit of int
 */

int print_last_digit(int x)
{
	int remainder;

	remainder = x % 10;

	if (remainder < 0)
		remainder = remainder * -1;

	_putchar(remainder + '0');
	return (remainder);
}
