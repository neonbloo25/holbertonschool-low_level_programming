#include "dog.h"
#include <stdlib.h>

char *_strdup(char *str);

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to the struct dog, or NULL if failed
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
 * @s: pointer to the string to check
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the string str.
 * @str: string to duplicate
 * Return: pointer to the duplicated string, or NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *res = NULL;
	int i = 0;

	if (str != NULL)
	{
		res = malloc(_strlen(str) + 1);
		if (res != NULL)
		{
			for (i = 0; i <= _strlen(str); i++)
				res[i] = str[i];
		}
	}
	return (res);
}
