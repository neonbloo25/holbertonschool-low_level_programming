#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - checks if the variable is a lowercase character.
 * Return: 0 (Success)
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
