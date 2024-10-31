#include "main.h"
/**
 * rev_string - reverses string in question
 * @s: is string
 */
void rev_string(char *s)
{
	int i;
	int x;
	int length;
	int arr;

	for (i = 0; s[i] != '\0'; i++)
		{}
	length = i;
	for (x = 0; i > length / 2; i--, x++)
		{
		arr = s[i - 1];
		s[i - 1] = s[x];
		s[x] = arr;
		}
}
