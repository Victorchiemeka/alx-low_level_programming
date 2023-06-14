#include <stdio.h>
#include <stdlib.h>
/**
 * main - the function that take arguement
 * @argc: parameter
 * @argv: another parameter
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	int first, second, final;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	first = atoi(argv[1]);
	second = atoi(argv[2]);
	final = first * second;
	printf("%d\n", final);
	return (0);
}
