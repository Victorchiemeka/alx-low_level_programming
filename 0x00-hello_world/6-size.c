#include <stdio.h>
/**
 * main - function
 * Return: always success
 */

int main(void)
{	char c;
	int number;
	long int longnu;
	long long int llnu;
	float decimal;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(number));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longnu));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llnu));
	printf("Size of a float: %zu byte(s)\n", sizeof(decimal));
	return (0);
}
