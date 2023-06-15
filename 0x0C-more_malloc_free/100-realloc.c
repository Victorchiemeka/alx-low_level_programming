#include "main.h"
#include <stdlib.h>


/**
 * _realloc - This function reallocates a memory block
 * @ptr: Is a pointer to previsouly allocated memory
 * @old_size: Is the size of previously allocated memory
 * @new_size: Is the size of the newly allocated memory
 * Return: A pointer to newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	new = malloc(new_size);
	if (new  == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		new[i] = ((char *)ptr)[i];
	free(ptr);
	return (new);
}
