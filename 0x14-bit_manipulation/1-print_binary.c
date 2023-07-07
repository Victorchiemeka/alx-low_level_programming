#include "main.h"

/**
 * print_binary - a function that prints binary representation of date
 * @n: the value to be printed
 * Return: the value
 */
void print_binary(unsigned long int n)
{
	unsigned long int bitmask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leadingZeros = 1;

	while (bitmask > 0)
	{
		if ((n & mask) != 0)
		{
			leadingZeros = 0;
			printf("1");
		}
		else if (!leadingZeros)
		{
			printf("0");
		}
		mask >>= 1;
	}
	if (leadingZeros)
	{
		printf("0");
	}
}
