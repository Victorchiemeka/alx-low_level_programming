#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * print_rev - a function that reverses a string
 * @s: the parameter of the function
 */
void print_rev(char *s)
{
	int length;
	int i;

	length = strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
