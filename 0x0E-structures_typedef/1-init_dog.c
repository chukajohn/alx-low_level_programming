#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialization a dog
 * @d: parameter of dog
 * @name: name of ddog
 * @owner: name of owner
 *  @age: age of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
