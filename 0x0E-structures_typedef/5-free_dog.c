#include "dog.h"


/**
 * free_dog - Function initializes a struct
 * @d: The dog
 * Return: Void, no return
 * @BySalma.as
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
