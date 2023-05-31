#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concatenates two string
 * @dest: parameter to the function
 * @src: another parameter
 * @n: n parameter
 * Return: return the pointer string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
