#include <stdio.h>
/**
 * main - a function that prints a to z
 * Return: always sucess
 */
int main(void)
{
	char c = 'a';
	char z = 'z';

	while (c <= z)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
