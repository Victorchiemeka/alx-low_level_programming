#include <stdio.h>
/**
 * main - a function that prints hexa
 * Return: always sucess
 */
int main(void)
{
	char b = 'f';
	char a = 'a';
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (a <= b)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
