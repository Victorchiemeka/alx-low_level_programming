#include <stdio.h>
/**
 * main - a program that uses command line arguement
 * @argc: this stores numbers of command line argument
 * @argv: this is the array of a string that store actual text user type in cmd
 * Return: always sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
