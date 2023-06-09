#include <stdio.h>
/**
 * prints the number of arguement passed 
 * @argc: the number of arguement passed
 * @argv: array of the string
 * Return: always sucess
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d", argc - 1);
	return (0);
}
