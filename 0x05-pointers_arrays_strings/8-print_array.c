#include <stdio.h>
#include "main.h"
/**
 * print_array - prints the value of array
 * @a: the parameter of the array
 * @n: another parameter of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		if (i < n - 1)
		{
			printf(",");
		}
		printf(" ");
		a++;

	}
	printf("\n");
}
