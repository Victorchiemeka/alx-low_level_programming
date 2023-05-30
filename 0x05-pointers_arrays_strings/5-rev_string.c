#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - a function that
 * @s: a paramter
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
