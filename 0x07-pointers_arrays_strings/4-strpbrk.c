#include <string.h>
#include "main.h"
/**
 * _strpbrk - a function that finds the first character
 * @s: the parameter of the function
 * @accept: the paramete of the function
 * Return: the value
 */
char *_strpbrk(char *s, char *accept)
{
	char *ret;

	ret = strpbrk(s, accept);
	return (ret);
}
