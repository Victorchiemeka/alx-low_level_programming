#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatnates two str
 * @s1: the first parameter
 * @s2: the second parameter
 * Return: the pointer to the string
 */


char *str_concat(char *s1, char *s2)
{
	int length1, length2;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = strlen(s1);
	length2 = strlen(s2);
	array = (char *)malloc(sizeof(char) * length1 + length2 + 1);
	strcpy(array, s1); /** copying the first  string to the array */
	strcat(array, s2); /** concatenating the second string to the array */
	return (array);
}
