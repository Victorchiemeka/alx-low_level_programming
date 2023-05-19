#include <stdio.h>
/**
 * main - prints out a digit with putchar
 * Return: always sucess
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
