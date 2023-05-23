#include "main.h"
#include <ctype.h>
/**
 * _islower - return a lower character
 * Return: the function
 */
int _islower(int c)
{
	int c;

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
