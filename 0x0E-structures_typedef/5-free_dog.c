#include "dog.h"

/**
 * free_dog - This function lets all dogs e free
 * @d: Is the pointer to the dog to be released
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
