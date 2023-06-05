#include "main.h"
#include <string.h>
/**
 * _memset - a function that fills the bytes
 * @s: pointer of the function
 * @b: the constant parameter
 * @n: the number
 * Return: the value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
