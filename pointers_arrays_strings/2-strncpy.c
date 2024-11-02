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
	int len;
	int i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len - (len - n); i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
