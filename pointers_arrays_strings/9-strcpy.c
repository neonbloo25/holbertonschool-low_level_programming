#include "main.h"
/**
 * _strcpy - copies string from one p/char to aother
 * @dest: desired destination for text
 * @src: initial string
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
