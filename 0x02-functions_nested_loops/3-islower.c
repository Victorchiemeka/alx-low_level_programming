#include "main.h"
#include <ctype.h>
/**
 * _islower - return a lower character
 * @c: a parameter for the function
 * Return: the function
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
