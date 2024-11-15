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
	dog_t *d2;

	d2 = malloc(sizeof(dog_t));
	if (d2 == NULL)
		return (NULL);

	d2->name = strdup(name);
	if (d2->name == NULL)
	{
		free(d2);
		return (NULL);
	}

	d2->age = age;

	d2->owner = strdup(owner);
	if (d2->owner == NULL)
	{
		free(d2->name);
		free(d2);
		return (NULL);
	}

	return (d2);
}
