#include "main.h"
#include <ctype.h>
/**
 * _isalpha - used to check aplhabet or not
 * @c: a parameter to the function
 * Return: one if true
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
