#include <stdlib.h>
#include "main.h"
/**
 * _calloc - a function that allocates meomory
 * @nmemb: the parameter
 * @size: the size
 * Return: the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(size * nmemb);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		memory[i] = 0;
	return (memory);
}
