#include "main.h"
#include <string.h>
/**
 * _memcpy - a function that copies number of bytes
 * @dest: the destination of the copied
 * @src: the source of the copied
 * @n: the number of the copy
 * Return: the copied pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
