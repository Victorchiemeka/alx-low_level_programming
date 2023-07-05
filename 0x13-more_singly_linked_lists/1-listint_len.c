#include "lists.h"

/**
 * listint_len - function that  counts elements in a linked list
 * @h: A pointer to the head of  linked list
 *
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	/* Traverse the linked list until the end to count its elements*/
	while (h != NULL)
	{
		length++;
		h = h->next;
	}

	return (length);
}
