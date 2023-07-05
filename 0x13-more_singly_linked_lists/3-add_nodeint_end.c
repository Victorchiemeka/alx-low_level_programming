#include "lists.h"

/**
 * add_nodeint_end - This function add a new node at the end of a linked list
 * @head: Is a  pointer to a pointer to the first element in the list
 * @n: Is the integer data to insert in the new element
 *
 * Return: A pointer to the new node or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head; /*A temporary pointer to traverse the list*/

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value of the new node to the given integer */
	new_node->n = n;
	new_node->next = NULL; /* Set the new node's next pointer to NULL */

	/* If the list is empty, set the head to the new node and return it*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Else traverse the list to find the last node*/
	while (temp->next)
		temp = temp->next;

	/* Then set the last node's next pointer to the new node */
	temp->next = new_node;

	return (new_node);
}
