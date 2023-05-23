#include <stdio.h>
/**
 * main - a function that prints a string
 * Return: always sucess
 */
int main(void)
{
	/* a string declaration in an array */
	char string[] = "_putchar";
	/* declaration of the variable index */
	int index;
	/* a loop that iterates through the array and increment */
	for (index = 0; string[index]; index++)
		/* printing out string after iteration */
		putchar(string[index]);
	/* printing out a new line */
	putchar('\n');
	return (0);
}
