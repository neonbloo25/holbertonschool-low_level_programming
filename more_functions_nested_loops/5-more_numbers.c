#include "main.h"

/**
 * more_numbers - counts to 14 ten times
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				_putchar((x / 10) + '1');
			_putchar((y % 10) + '0');
		}
	_putchar('\n');
	}
}
