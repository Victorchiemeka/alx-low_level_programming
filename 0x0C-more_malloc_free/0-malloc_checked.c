#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates space
 * @b: the size of the allocated space
 * Return: the space
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);
	return (c);
}
