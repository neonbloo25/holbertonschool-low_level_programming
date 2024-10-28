#include "main.h"
/**
 * times_table - will print the 9 times table from 0
 *
 * @x - outermost layer counter
 * @y - inner layer counter
 * @z - merges the former two and acts in bottommost layer
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			z = y * x;

			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z / 10) + '0');

			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
