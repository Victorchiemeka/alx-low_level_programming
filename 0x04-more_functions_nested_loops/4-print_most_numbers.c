#include "main.h"
/**
 * print_most_numbers - a function that prints and exclude some number
 *
 * Return: always suces/s
 */
void print_most_numbers(void)
{
	char c;

	while (c <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(c);
		}
		i++;
	}
	_putchar('\n');
}
