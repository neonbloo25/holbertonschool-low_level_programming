#include <ctype.h>
#include "main.h"
/**
 * _isalpha - will check if variable is a letter type character or w/e
 * @c: represents said character in question
 * Return: 0 (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
