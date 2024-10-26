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
	int result = x % 10;

	return (result);
}
