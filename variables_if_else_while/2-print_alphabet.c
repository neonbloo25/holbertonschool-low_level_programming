#include <stdio.h>
/**
 * main - main reads the alphabet
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');

	return (0);
}
