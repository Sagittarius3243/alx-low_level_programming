#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;
    listint_t *node;

    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);

    print_listint_safe(head);

    node = find_listint_loop(head);
    if (node != NULL)
    {
        printf("Loop starts at: %d\n", node->n);
    }
    else
    {
        printf("No loop\n");
    }

    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;

    node = find_listint_loop(head);
    if (node != NULL)
    {
        printf("Loop starts at: %d\n", node->n);
    }
    else
    {
        printf("No loop\n");
    }

    free_listint_safe(&head);

    return (0);
}
