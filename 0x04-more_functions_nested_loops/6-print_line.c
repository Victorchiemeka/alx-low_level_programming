#include "main.h"
/**
 * print_line - a function that prints a new line
 * @n: the parameter of the function
 * return: always sucess
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
