#include "function_pointers.h"
/**
 * print_name - a function that prints the name
 * @name: the name of the value pointed to
 * @f: the pointer function
 * Return: the value of the pointer
 */
void print_name(char *name, void (*f)(char *))
{
	/*If there is no adress in arguments, quit*/
	if (!name || !f)
		return;
	(*f)(name);
}
