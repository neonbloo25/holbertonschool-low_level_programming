#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a box
 * @size: measurement of box
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y <= size - 1; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
