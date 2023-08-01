#include "lists.h"

/**
 * sum_listint - Calculate the sum of all the integers in a linked list.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: Sum of all the integers in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
