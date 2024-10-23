#include <stdlib.h>
#include <stdio.h>
/**
 * main - counts from base ten... again..?
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		putchar (number);

	putchar ('\n');
	return (0);
}
