#include "main.h"
/**
 * cap_string - capitalizes, yo
 * @word: is the bird -er... word
 * Return: capitalized string
 */
char *cap_string(char *word)
{
	int i;

	i = 0;
	while (word[i])
	{
		while (!(word[i] >= 'a' && word[i] <= 'z'))
			i++;
		if (word[i - 1] == ' ' ||
			word[i - 1] == '\t' ||
			word[i - 1] == '\n' ||
			word[i - 1] == ',' ||
			word[i - 1] == ';' ||
			word[i - 1] == '.' ||
			word[i - 1] == '!' ||
			word[i - 1] == '?' ||
			word[i - 1] == '"' ||
			word[i - 1] == '(' ||
			word[i - 1] == ')' ||
			word[i - 1] == '{' ||
			word[i - 1] == '}' ||
			i == 0)
			word[i] -= 32;
		i++;
	}
	return (word);
}
