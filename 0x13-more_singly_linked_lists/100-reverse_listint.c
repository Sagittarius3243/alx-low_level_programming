#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the pointer of the first node of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next; // Store the next node
		current->next = prev; // Reverse the "next" pointer of the current node
		prev = current; // Move prev and current one step forward
		current = next;
	}

	*head = prev; // Update the head to point to the new first node (previous last node)
	return (*head);
}
