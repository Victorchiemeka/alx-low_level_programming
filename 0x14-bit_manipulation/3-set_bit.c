#include "main.h"
/**
 * set_bit - a function that sets bit
 * @n: the parameter
 * @index: the index
 * Return: the final value;
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bitmask = 1UL << index;
	*n |= bitmask;
	return (1);
}
