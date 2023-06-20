#include "dog.h"


/**
 * init_dog - Function initializes a struct
 * @d: The dog
 * @name: The  name value
 * @age: The age value
 * @owner: The owner value
 * Return: Void, no return
 * BySalma.as
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
