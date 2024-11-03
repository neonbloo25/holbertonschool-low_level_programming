#include "main.h"

/**
 * _strncpy - from one to another with an additional limit clause(i think)
 * @dest: string of destination
 * @src: string of origin
 * @n: number of characters to be copied(aka the limit clause)
 * Return: the modified dest, but only the n amount of characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		i++;
	}

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
