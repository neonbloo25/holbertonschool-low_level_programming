#include "main.h"
/**
 * _memcpy - appends n bytes from src to dest
 * @dest: where to copy to
 * @src: what to copy from
 * @n: amount of bytes
 * Return: modified dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
