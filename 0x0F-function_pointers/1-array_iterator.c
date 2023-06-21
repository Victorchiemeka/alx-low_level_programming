#include "function_pointers.h"
/**
 * array_iterator - a function that print parameter of an array
 * @array: var name
 * @size: the size of the array
 * @action: the pointer function to the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}

