#include <stdio.h>
#include "main.h"
/**
 * print_line - will make a pretty line or two~
 * @n: is the length factor of said line or two~
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
