#include "main.h"
/**
 * print_numbers - a function that prints number
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
