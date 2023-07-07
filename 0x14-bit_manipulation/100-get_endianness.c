#include "main.h"
/**
 * get_endianness - a function that get endianess
 * Return: return 1 if 1 else 0
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *ptr = (unsigned char *)&num;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
