#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - a function that prints str in rev
 * @s: the parameter of the function
 */
void _print_rev_recursion(char *s)
{
	int length, i;

	lenght = strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
