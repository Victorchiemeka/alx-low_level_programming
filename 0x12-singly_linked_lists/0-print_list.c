#include "lists.h"
#include <stdio.h>
/**
* print_list - a function that prints items in a linked
* @h: the value
* Return: the value
*/

size_t print_list(const list_t *h)
{
size_t start = 0;
while (h != NULL)
{
if (h->str != NULL)
printf("%s", h->str);
else
{
printf("[0] (nil)");
}
start++;
if (h->next != NULL)
{
printf(" ");
}
h = h->next;
}
printf("\n");
return (start);
}
