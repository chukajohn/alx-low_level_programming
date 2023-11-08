#include "dog.h"
#include <stdio.h>
/**
 *print_dog - function that prints dog
 *@d: a pointer to the vrible
 *
 *Return: pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("name: %s\n", (d->name) ? d->name : "(nil)");
		printf("age: %f\n", (d->age) ? d->age : 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
