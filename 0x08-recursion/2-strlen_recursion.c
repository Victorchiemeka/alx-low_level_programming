#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - a function that returns lenght of string
 * @s: parameter of the function
 * Return: the value
 */
int _strlen_recursion(char *s)
{
	return (*s ? 1 + _strlen_recursion(s + 1) : 0);
}
