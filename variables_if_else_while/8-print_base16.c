#include <stdio.h>
#include <stdlib.h>
/**
 * main - Count in Hex!
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int hex1;
	char hex2;

	for (hex1 = '0'; hex1 <= '9'; hex1++)
		putchar(hex1);
	for (hex2 = 'a'; hex2 <= 'f'; hex2++)
		putchar(hex2);

	putchar('\n');
	return (0);
}
