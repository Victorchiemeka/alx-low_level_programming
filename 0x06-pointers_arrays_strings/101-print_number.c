#include "main.h"
/**
 * print_number - a function that prints number
 * @n: the parameter to the function
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 1000)
	{
		_putchar((n / 1000) + '0');
		n %= 1000;
	}
	if (n >= 100)
	{
		_putchar((n / 100) + '0');
		n %= 100;
	}
	if (n >= 10)
	{
		_putchar((n / 10) + '0');
		n %= 10;
	}
	if (n >= 100)
	{
		_putchar((n / 100) + '0');
		n %= 100 /10;
	}
	_putchar(n + '0');
}
