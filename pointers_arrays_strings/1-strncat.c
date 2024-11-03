#include "main.h"
/**
 * _strncat - will link two strings together
 * @dest: string 1
 * @src: string 2
 * @n: specified amount
 * Return: the resulting dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
