#include <ctype.h>
#include "main.h"
/**
 * _isdigit - check wether its a number or not
 * @c: subject in question
 *
 * Return: 1 or 0 i
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
