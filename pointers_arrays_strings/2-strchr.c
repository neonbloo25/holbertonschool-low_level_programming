#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: subject string
 * @c: target character
 * Return: a pointer to first occurance of char or null byte
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
