#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints value of stucture
 * @d: the pointer
 * Retur: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (*d).name != NULL ? (*d).name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? (*d).owner : "(nil)");
}
