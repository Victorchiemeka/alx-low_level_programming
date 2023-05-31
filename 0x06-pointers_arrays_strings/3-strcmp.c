#include <string.h>
#include "main.h"
/**
 * _strcmp - a function that compares string
 * @s1: parameter to the function
 * @s2: a parameter pointer to the function
 * Return: the function;
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	c = strcmp(s1, s2);
	return (c);
}
