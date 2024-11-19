#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - WHO LET THE DOGS OUT?!?!?!
 * @d: the dog in question
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}