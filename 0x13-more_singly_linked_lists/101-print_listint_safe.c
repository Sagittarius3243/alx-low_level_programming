#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Print a listint_t list safely.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t num_nodes = 0;
    const listint_t *current = head, *loop_node = NULL;

    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        num_nodes++;
        current = current->next;

        if (current == loop_node)
        {
            printf("-> [%p] %d\n", (void *)current, current->n);
            break;
        }

        if (num_nodes % 2 == 0 && num_nodes > 2)
            loop_node = loop_node->next;
    }

    return (num_nodes);
}
