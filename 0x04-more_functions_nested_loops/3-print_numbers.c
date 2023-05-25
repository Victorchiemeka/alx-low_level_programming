#include "main.h"
/**
 * print_numbers - a function that prints number
 * Return: always sucess
 */
void print_numbers(void)
{
	int i;

	while (i <= 9)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
	return (0);
}
