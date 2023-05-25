#include "main.h"
/**
 * more_numbers - a function that prints 10x
 *
 * Return: always sucesssvoid more_numbers(void)
 */
void more_numbers(void)
{
	int i;
	int j;
	int num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			num = j;
			if (num >= 10)
			{
				_putchar('0' + (num / 10));
				num %= 10;
			}
			_putchar('0' + num);
		}
		_putchar('\n');
	}
}
