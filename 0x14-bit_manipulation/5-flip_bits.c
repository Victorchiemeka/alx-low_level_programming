#include "main.h"
/**
 * flip_bits - a function that flip bits
 * @n: the parameter
 * @m: the second parameter
 * Return: the value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
