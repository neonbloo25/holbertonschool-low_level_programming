#include "main.h"
/**
 * puts_half - prints half the string
 * @str: string in question
 */
void puts_half(char *str)
{
	int len;
	int i;
	int n;
	int length_of_the_string;

	length_of_the_string = 0;

	for (len = 0; str[len] != '\0'; len++)
		length_of_the_string = len + 1;

	n = (length_of_the_string - 1) / 2;

	for (i = n + 1; i < length_of_the_string; i++)
		_putchar(str[i]);

	_putchar('\n');
}
