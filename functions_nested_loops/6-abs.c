#include <stdlib.h>
#include "main.h"
/**
 * _abs - will compute the absolute value of an integer
 * @c: will become positive if negative
 *
 * Return: absolute version of the number (Success)
 */
int _abs(int c)
{
	if (c < 0)
		return (-c);
	else
		return (c);
}
