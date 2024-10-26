#include <stdlib.h>
#include "main.h"
/**
 * _abs - will compute the absolute value of an integer
 * @c: will become positive if negative
 *
 * Return: 0 (Success)
 */
int _abs(int c)
{
	int absValue;

	absValue = abs(c);

	_putchar(absValue);
	return (0);
}
