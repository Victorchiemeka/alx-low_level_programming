#include "lists.h"
/**
 * get_nodeint_at_index - a function returns the nth element of a linked list
 * @head: the first node of the linked list
 * @index: the index should return
 * Return: the nth element of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp ? temp : NULL);
}
