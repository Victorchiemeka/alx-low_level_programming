#include <stdio.h>
/**
 * main - a function that prints a in reverse format
 * Return: always sucess
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
