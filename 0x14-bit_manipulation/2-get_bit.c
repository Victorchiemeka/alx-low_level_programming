#include "main.h"
/**
 * get_bit - a function that returns the value of the index
 * @n: the parameter
 * @index: the second parameter
 * Return: the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bitmask = 1UL << index;
	return ((n & bitmask) != 0);
}
