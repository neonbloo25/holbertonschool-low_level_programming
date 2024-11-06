#include "main.h"
/**
 * _strspn - locates specific chars
 * @s: target to search
 * @accept: search term(s)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[i]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
