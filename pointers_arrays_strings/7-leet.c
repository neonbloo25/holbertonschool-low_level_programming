#include "main.h"
/**
 * leet - OMG 13375P34K!!!
 * @n: code to decrypt
 * Return: encrypted message
 */
char *leet(char *n)
{
	int i, x;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x < 10; x++)
		{
			if (n[i] == s1[x])
			{
				n[i] = s2[x];
			}
		}
	}
	return (n);
}
