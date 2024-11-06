#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - does thing
 * @s: the string
 * @accept: the thing
 * Return: modded *s, likely
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;

	i = 0;

	while (s[i] != '\0')
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
				return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
