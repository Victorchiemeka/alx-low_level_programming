#include "main.h"
/**
 * _pow_recursion - a function that returns expontential
 * @x: the parameter of the function
 * @y: the expontential
 * Return: the value of the recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
