#include <stdio.h>
/**
 * main - a program that uses command line arguement
 * return: always sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n",argv[i]);
	}
}
