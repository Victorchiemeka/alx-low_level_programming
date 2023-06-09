#include <stdio.h>
/**
 * main - prints out the entire text
 * @argc: the parameter of the function
 * @argv: the pointer to the string
 * Return: sucess always
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
