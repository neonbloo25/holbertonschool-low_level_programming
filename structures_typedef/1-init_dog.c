#include <stddef.h>
#include "main.h"
#include "dog.h"
/**
 * init_dog - initializes a variable of the created dog struct type
 * struct dog - secondary header containing structs
 * @name: char type var
 * @age: int type var
 * @owner: char type var
 * Return: Zero if good, Null if error
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d;
	d = malloc(sizeof(struct dog);
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
