#include "function_pointers.h"
/**
 * print_name - a function that prints the name
 * @name: the name of the value pointed to
 * @f: the pointer function
 * Return: the value of the pointer
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
