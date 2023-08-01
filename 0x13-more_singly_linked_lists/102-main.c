#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;
    listint_t *head2 = NULL;
    listint_t *node;

    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);

    print_listint_safe(head);

    head2 = add_nodeint(&head2, 100);
    add_nodeint(&head2, 101);
    add_nodeint(&head2, 102);
    add_nodeint(&head2, 103);
    add_nodeint(&head2, 104);
    print_listint_safe(head2);

    node = find_listint_loop(head);
    if (node != NULL)
    {
        printf("Loop starts at: %d\n", node->n);
    }
    else
    {
        printf("No loop\n");
    }

    node = find_listint_loop(head2);
    if (node != NULL)
    {
        printf("Loop starts at: %d\n", node->n);
    }
    else
    {
        printf("No loop\n");
    }

    free_listint_safe(&head);
    free_listint_safe(&head2);

    return (0);
}
