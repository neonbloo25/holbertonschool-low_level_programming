#include "main.h"

/**
 * print_numbers - teaches us how to count
 */

void print_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar ('\n');
}
