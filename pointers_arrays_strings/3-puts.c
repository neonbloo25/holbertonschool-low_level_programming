#include "main.h"
/**
 * _puts - prints string
 * @str: is string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
