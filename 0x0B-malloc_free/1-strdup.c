#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer
 * @str: the string
 * Return: the copy of the string
 */
char *_strdup(char *str)
{
	unsigned int length;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);
	array = (char *)malloc(sizeof(char) * (length + 1));
	if (array == NULL)
		return (NULL);
	strcpy(array, str);
	return (array);
}
