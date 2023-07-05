#include "lists.h"

/**
 * free_listint - This function is for freeing a linked list
 * @head: Is the linked list to be freed
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		/* Store the next node before freeing the current one */
		temp = head->next;
		free(head);/* Free current node */
		head = temp;/* Then go to the next*/
	}
}
