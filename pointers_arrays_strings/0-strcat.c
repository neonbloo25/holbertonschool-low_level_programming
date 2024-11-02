#include "main.h"
/**
 * _strcat - unites two strings
 * @dest: string 1
 * @src: string 2
 * Return: dest with src added to it
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int x;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	x = 0;
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
