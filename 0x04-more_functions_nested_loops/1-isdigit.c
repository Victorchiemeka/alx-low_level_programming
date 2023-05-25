#include "main.h"
#include <ctype.h>
/**
 * _isdigit - a function that prints only digit
 * @c: parameter for the function
 * Return: return 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
