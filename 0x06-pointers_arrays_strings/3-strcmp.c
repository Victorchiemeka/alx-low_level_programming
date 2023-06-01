#include <string.h>
#include "main.h"
/**
 * _strcmp - a function that compares string
 * @s1: parameter to the function
 * @s2: a parameter pointer to the function
 * Return: the function;
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	if (s1[i] == '\0')
		return (0);
	else
		return (1);
}
