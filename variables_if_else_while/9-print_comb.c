#include <stdlib.h>
#include <stdio.h>
/**
 * main - Follow the pattern!
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number <= '8')
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
