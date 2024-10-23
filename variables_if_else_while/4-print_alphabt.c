#include <stdlib.h>
#include <stdio.h>
/**
 * main - Lower alphabet, hold the q's and e's!
 *
 * Return: 0(Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
			continue;
		else
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
