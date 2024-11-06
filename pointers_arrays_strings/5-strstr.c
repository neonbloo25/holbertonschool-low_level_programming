#include "main.h"
#include <stddef.h>
/**
 * _strstr - scours through string to find match if any
 * @haystack: string to browse
 * @needle: search match criteria
 * Return: pointer aimed at first match or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x;

	i = 0;

	while (haystack[i] != '\0')
	{
		for (x = 0; haystack[i] == needle[x]; x++)
			i++;

		if (needle[x] == '\0')
			return (&haystack[i - x]);

		i++;
	}
	return (NULL);
}
