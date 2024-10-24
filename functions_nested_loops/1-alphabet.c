#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - is an alphabet prototype!
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
