#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if(i == 0)
	{
		printf("Error");
	}
	else
	{
		for(i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d", sum);
	}
	return (0);
}
