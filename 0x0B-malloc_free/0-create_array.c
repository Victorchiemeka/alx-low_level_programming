#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars initialiizes it with specific char
 * @size: the size of the array
 * @c: the parameter of the array
 * Return: the outputed result
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *Array;

	if (size == 0)
		return (NULL);
	Array = (char *)malloc(sizeof(char) * size);

	if (Array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		Array[i] = c;
	return (Array);
}
