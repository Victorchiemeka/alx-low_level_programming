#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int first, second, final;
	if (argc != 3)
	{
		printf("Error\n");
	}
	first = atoi(argv[1]);
	second = atoi(argv[2]);
	final = first * second;
	printf("%d\n", final);
	return (0);
}
