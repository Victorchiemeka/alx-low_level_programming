#include "main.h"
#include <stdlib.h>
/**
 * array_range - the function
 * @min: the minimum
 * @max: the maximum
 * Return: the pointer
 */
int *array_range(int min, int max)
{
	int *array, length, i;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	array = malloc(sizeof(int) * length);
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		array[i] = min++;
	return (array);

}
