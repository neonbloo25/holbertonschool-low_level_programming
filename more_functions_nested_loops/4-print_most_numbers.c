#include "main.h"
/**
 * print_most_numbers - some numbers we like... only some tho
 */
void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			num++;
		_putchar(num);
	}
	_putchar('\n');
}
