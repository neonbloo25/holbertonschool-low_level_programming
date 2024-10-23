#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main counts in base 10
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);

	putchar('\n');
	return (0);
}
