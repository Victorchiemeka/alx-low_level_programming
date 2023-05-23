#include "main.h"
/**
 * print_alphabet - a function that prints in lower
 * Return: return the function
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
