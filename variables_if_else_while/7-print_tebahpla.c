#include <stdlib.h>
#include <stdio.h>
/**
 * main - Alphabet but in reverse!!!
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);
}
