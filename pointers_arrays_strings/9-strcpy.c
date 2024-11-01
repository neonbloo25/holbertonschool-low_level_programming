#include "main.h"
/**
 * _strcpy - copies string from one p/char to aother
 * @dest: desired destination for text
 * @src: initial string
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] <= '\0'; i++)
		dest[i] = src[i + 1];
	return (dest);
}
