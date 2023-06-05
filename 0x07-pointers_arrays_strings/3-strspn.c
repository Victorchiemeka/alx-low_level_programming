#include <string.h>
#include "main.h"
/**
 * _strspn - a function that get the input substring
 * @s: the parameter of the function
 * @accept: the paramter of the function
 * Return: the pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
