#include <stdio.h>
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
	if (!d)
                d = malloc(sizeof(dog_t));
        d->name = name;
        d->age = age;
        d->owner = owner;
}
