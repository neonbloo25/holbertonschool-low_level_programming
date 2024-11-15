#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - new doggie!
 * @name: desired label
 * @age: age value
 * @owner: registered owner
 * Return: Null if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d = NULL;

	new_d = malloc(sizeof(dog_t));
	if (new_d != NULL)
	{
		new_d->name = _strdup(name);
		if (new_d->name == NULL)
		{
			free(new_d);
			return (NULL);
		}
		new_d->owner = _strdup(owner);
		if (new_d->owner == NULL)
		{
			free(new_d->name);
			free(new_d);
			return (NULL);
		}
		new_d->age = age;
	}
	return (new_d);
}

/**
 * _strlen - returns the length of a string.
 * @s: pointer to check
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s = s + 1;
	}
	return (len);
}

/**
 * _strdup - copy of the string given as a parameter
 * @str: string of char
 *
 * Description: The _strdup() function returns a pointer to a new string which
 * is a duplicate of the string str.
 * Returns NULL if str = NULL
 *
 * Return: a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *res = NULL;
	int i = 0;

	if (str != NULL)
		res = malloc(_strlen(str) + 1);
	if (res != NULL)
	{
		for (i = 0; i <= _strlen(str); i++)
			res[i] = str[i];
	}
	return (res);
}
