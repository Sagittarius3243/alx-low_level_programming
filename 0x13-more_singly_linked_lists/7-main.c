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

    node = get_nodeint_at_index(head, 2);
    printf("%d\n", node->n);

    node = get_nodeint_at_index(head, 10);
    printf("%p\n", (void *)node);

    free_listint(head);

    return (0);
}
