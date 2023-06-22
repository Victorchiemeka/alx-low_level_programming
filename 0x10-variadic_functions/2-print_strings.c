#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - the function that prints strings
 * @separator: the string to be printed between the strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list args;
	char *string;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else if (string)
		{
			printf("%s", string);
		}
		if (x < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
