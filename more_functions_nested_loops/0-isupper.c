#include <ctype.h>
#include "main.h"
/**
 * _isupper - verifies if the subject is upper case
 * @c: is the subject in question
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
