#include "main.h"
/**
 * print_chessboard - U WANT CHESSS?!?!?! U GOT IT BBY!!!!!
 * @a: chess array bbyyyyyyyyy
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int x;
	char t;

	for (i = 0; i <= 7; i++)
	{
		for (x = 0; x <= 7; x++)
		{
		t = a[i][x];
		_putchar(t);
		}
	_putchar('\n');
	}
}
