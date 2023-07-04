#include "lists.h"

/**
* list_len - a functiob that counts the number of nodes
* @h: a pointer to the head of the linked list
* Return: the number of nodes counted
*/
size_t list_len(const list_t *h)
{
/* the counter that start from zero */
size_t count = 0;

/* a loops that counts each node in the list and returns it */
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
