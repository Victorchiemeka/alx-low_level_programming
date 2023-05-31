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
	strcat(dest, src);
	return (dest);
}
