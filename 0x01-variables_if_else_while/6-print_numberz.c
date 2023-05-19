#include <stdio.h>
/**
 * main - prints out a digit with putchar
 * Return: always sucess
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
