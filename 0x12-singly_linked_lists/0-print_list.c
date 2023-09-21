#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
