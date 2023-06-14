#include <stdio.h>
/**
 * main - n prints the number of arguement passed
 * @argc: the number of arguement passed
 * @argv: array of the string
 * Return: always sucess
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
