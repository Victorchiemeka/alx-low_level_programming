#include <string.h>
#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: a parameter
 * @src: a parameter pointer
 * @n: a parameter for number
 * Return: dest always
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
