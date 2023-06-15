#include "main.h"

/**
 * is_valid_input - This function checks if the argument contains only digits
 * @s: the input string to check
 * Return: true if the string contains only digits, false otherwise
 */
bool is_valid_input(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

/**
 * multiply - This function multiplies two numbers in form of strings
 * @s1: The first input string
 * @s2: The second input string
 * Return: void
 */
void multiply(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0, full_len, *result;
	bool leading_zeros;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	full_len = len1 + len2 + 1;
	result = calloc(full_len, sizeof(int));

	/* Perform the multiplication */
	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0, digit1 = s1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			int digit2 = s2[j] - '0';

			carry += result[i + j + 1] + (digit1 * digit2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[i] += carry;
	}
	leading_zeros = true;
	for (i = 0; i < (full_len - 1); i++)
	{
		if (leading_zeros && result[i] == 0)
			continue;
		leading_zeros = false;
		printf("%d", result[i]);
	}
	if (leading_zeros)
		printf("0");
	printf("\n");

	free(result);
}

/**
 * main - Entry point
 * @argc: The number of input arguments
 * @argv: An array containing the input arguments
 * Return: 0 if the multiplication was successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	/* Check if the input arguments are valid */
	if (argc != 3 || !is_valid_input(argv[1]) || !is_valid_input(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	/* Perform the multiplication and print the result */
	multiply(argv[1], argv[2]);

	return (0);
}
