#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int multi;
	
	multi = 0;

	for (i = 0; i < argc; i++)
	{
		multi = atoi(argv[i]);
		multi = multi * multi;
		printf("%d\n", multi);
	}
	return (0);
}
