#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: is the string in question
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
		if (str[i] != '\0')
			i++;
		else if (str[i + 1] == '\0')
		{
			_putchar('\n');
			break;
		}
	}
	_putchar('\n');
}
