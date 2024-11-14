#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the struct
 * @d: desired struct
 * Return: 0
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
