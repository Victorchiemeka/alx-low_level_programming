#include "main.h"
/**
 * factorial - a function that print factorial
 * @n: the parameter of the function
 * Return: the value of the factorial recursively
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
