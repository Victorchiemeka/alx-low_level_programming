#include <string.h>
#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: a parameter
 * @needle: a parameter
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *wen;

	wen = strstr(haystack, needle);
	return (wen);
}
