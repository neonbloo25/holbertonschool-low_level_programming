#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: is the string in question
 */
void puts2(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0'; len++)
	{}
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
