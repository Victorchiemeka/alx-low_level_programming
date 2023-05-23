#include "main.h"
/**
 * print_sign - a function that prints sign
 * @n: parameter of the function
 * Return: return some value if condition is true
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	return (0);
}
