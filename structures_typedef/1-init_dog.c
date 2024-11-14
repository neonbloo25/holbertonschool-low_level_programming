#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of the created dog struct type
 * struct dog - secondary header containing structs
 * @d: struct label
 * @name: char type var
 * @age: int type var
 * @owner: char type var
 * Return: Zero if good, Null if error
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
