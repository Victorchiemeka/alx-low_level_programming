#include "variadic_functions.h"
/**
 * sum_them_all - a function that sums all argurment passed
 * @n: the arguments to be passed
 * Return: the sum of arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	i = 0;
	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
