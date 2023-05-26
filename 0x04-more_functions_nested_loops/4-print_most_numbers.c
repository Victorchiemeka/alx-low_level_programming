#include "main.h"
/**
 * print_most_numbers - a function that prints and exclude some number
 *
 * Return: always suces/s
 */
void print_most_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
