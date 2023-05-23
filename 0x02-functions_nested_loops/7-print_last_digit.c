#include "main.h"
/**
 * print_last_digit - a function that prints the last digit
 * @n: a parameter to the function
 * Return: the value
 */
int print_last_digit(int n)
{
	int total;

	if (n < 0)
		n = -n;
	total = n % 10;
	if (total < 0)
		total = -total;
	_putchar(total + '0');
	return (total);
}
