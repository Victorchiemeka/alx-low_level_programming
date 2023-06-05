#include <string.h>
#include "main.h"
/**
 * _strchr - a function that returns a pointer to it first occurance
 * @s: the parameter of the function
 * @c: another parameter to the function
 * Return: always the function
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);
	return (ptr);
}
