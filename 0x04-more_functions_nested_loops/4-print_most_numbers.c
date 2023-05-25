#include "main.h"
/**
 * print_most_numbers - a function that prints and exclude some number
 * Return: always sucess
 */
void print_most_numbers(void)
{
	int i;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
