#include "lists.h"

/**
 * add_nodeint - A function that creates  new node on the head of  linked list
 * @head: Is a pointer to the first node of the linked list
 * @n: The integer data to be inserted in the new node
 *
 * Return: The address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value of the new_node to the given integer */
	new_node->n = n;
	/* Set the new_node's next pointer to the current head */
	new_node->next = *head;
	/* Set the head to the new_node */
	*head = new_node;

	return (new_node);
}
