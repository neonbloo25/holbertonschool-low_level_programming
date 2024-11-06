#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @s: subject string
 * @c: target character
 * Return: a pointer to first occurance of char
 */
char *_strchr(char *s, char c)
{
	int i;

	i  = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
