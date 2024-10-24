#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - do i really have to tell u wat it do? rlly???
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int count;

	count = 0;

	while (count <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		count++;
	}
}
