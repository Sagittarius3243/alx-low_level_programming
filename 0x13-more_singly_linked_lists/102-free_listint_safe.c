#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list and sets the head to NULL
 * @head: Pointer to the pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
void free_listint_safe(listint_t **head)
{
	listint_t *current, *next;
	size_t size = 0;

	if (head == NULL || *head == NULL)
		return;

	current = *head;
	*head = NULL;

	while (current != NULL)
	{
		size++;
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL; /* Ensure the head is set to NULL */
}
