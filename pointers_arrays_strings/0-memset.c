#include "main.h"
/**
 * _memset - rewrites n amount of s with b
 * @s: subject string
 * @b: desired char
 * @n: intended length of rewrite
 * Return: altered string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
		s[i] = b;
	return (s);
}
