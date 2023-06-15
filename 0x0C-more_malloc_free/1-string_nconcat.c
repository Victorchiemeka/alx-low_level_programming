#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - a function thar concatenates str
 * @s1: first string
 * @s2: second string
 * @n: the number
 * Return: the pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *all;
	unsigned int i, k, length1, leng;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = strlen(s1);
	leng = strlen(s2);
	if (n < leng)
		all = malloc(sizeof(char) * (length1 + n + 1));
	else
		all = malloc(sizeof(char) * (length1 + leng + 1));
	if (all == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (n < leng && i < (length1 + n))
		all[i++] = s2[k++];
	while (n >= leng && i < (length1 + leng))
		all[i++] = s2[k++];
	all[i] = '\0';
	return (all);

}
