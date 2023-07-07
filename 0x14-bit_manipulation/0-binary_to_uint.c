#include "main.h"

/**
 * binary_to_uint - a function that converts a binary
 * @b: the pointer to the string
 * Return: the value of the returned
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL) /* checks if b is null */
	{
		return (0); /*return 0 if true */
	}
	while (*b != '\0') /**
			     * a loop that iterates over each
			     * line untill it reaches the null character
			     */
	{
		if (*b != '0' && *b != '1') /* checks if B is not a binary digit */
		{
			return (0); /* return 0 if true*/
		}
		/**
		 * miltiplying it by 2 and
		 * adding the value of the current binary to the digit,
		 * binary is obtained by substracting
		 * the chracter 0 from the current character
		 */
		value = (value * 2) + (*b - '0');
		b++; /* moves the pointer to the next line */
	}
	return (value); /* return value as an unsigned int */
}
