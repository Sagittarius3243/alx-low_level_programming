#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Pointer to a pointer to the first node of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	current = *h;

	while (current)
	{
		temp = current;
		current = current->next;
		count++;

		if (temp < current)
		{
			free(temp);
		}
		else
		{
			free(temp);
			break;
		}
	}

	*h = NULL;

	return (count);
}
