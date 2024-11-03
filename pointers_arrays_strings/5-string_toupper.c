#include "main.h"

/**
 * string_toupper - lowercase letters to upper case
 * @word: word to switch to characters
 * Return: Oops all caps!
 */
char *string_toupper(char *word)
{
	int i, swap;

	i = 0;
	swap = 'a' - 'A';

	for (i = 0; word[i] != '\0' ; ++i)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
		{
			word[i] = word[i] - swap;
		}
	}
	return (word);
}
