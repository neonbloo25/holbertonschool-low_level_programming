#include "main.h"
/**
 * _strlen - checks length of string
 * @s: is the string in question!
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
		{
		s++;
		length++;
		}
	return (length);
}
