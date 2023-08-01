#include "lists.h"

/**
 * get_nodeint_at_index - Get the node at a given index in a linked list.
 * @head: Pointer to the head node of the linked list.
 * @index: Index of the node to retrieve, starting from 0.
 *
 * Return: If the node at the index does not exist, return NULL.
 *         Otherwise, return the address of the node at the given index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL);
}
