#include <stdio.h>
#include <stddef.h>
#include "dog.h"
/**
 * print_dog - prints the struct
 * @d: desired struct
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else if (d->name != NULL)
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
}
