#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a list.
 * @head: Pointer to the pointer of the head node.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new element or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
