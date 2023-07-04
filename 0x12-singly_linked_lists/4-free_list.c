#include <stdlib.h>
#include "lists.h"
/**
* free_list - a function that frees a linked list
* @head: the pointer
* Return: sucess
*/
void free_list(list_t *head)
{
list_t *tempo;
if (head == NULL)
return;
while (head)
{
tempo = head->next;
free(head->str);
free(head);
head = tempo;
}
}
