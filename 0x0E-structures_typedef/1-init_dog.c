#include "dog.h"
#include <stddef.h>
/**
 *init_dog - a duncrion that init variables
 *@age: age of the owner
 *@name: name of the owner
 *@owner: of the variable
 *@d: new variable
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
