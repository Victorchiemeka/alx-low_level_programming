#include "lists.h"
/**
 * print_listint - a function that prints all element of a list
 * @h: the newnode
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL) /* go through the list till the end */
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
