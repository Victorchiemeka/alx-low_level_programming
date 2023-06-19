#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - A function that intializes a structure
 * @d: the pointer
 * @name: the parameter
 * @age: parameter
 * @owner: paramter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name[sizeof(d->name) - 1] = '\0';
	d->age = age;
	strncpy(d->owner, owner, sizeof(d->owner) - 1);
	d->owner[sizeof(d->owner) - 1] = '\0';
}
