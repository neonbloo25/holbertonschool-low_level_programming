#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - checks if the variable is a lowercase character.
 * @c: C represents the thing, what, dont ask me, go away
 * Return: 0 (Success)
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
