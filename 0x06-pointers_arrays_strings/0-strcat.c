#include <string.h>
#include "main.h"
/**
 * _strcat - a function that appends a string
 * @dest: parameter of the function
 * @src: parameter of the function
 * Return: return the value to the pointer
 */
char *_strcat(char *dest, char *src)
{
	int length1, length2, i;

	length1 = strlen(dest);
	length2 = strlen(src);
	for (i = 0; i < length2; i++)
	{
		dest[length1 + i] = src[i];
	}
	return (dest);
}
