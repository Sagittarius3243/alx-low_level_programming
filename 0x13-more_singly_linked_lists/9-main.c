#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;

    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);

    print_listint(head);

    printf("-----------------\n");

    insert_nodeint_at_index(&head, 5, 98);
    print_listint(head);

    printf("-----------------\n");

    insert_nodeint_at_index(&head, 0, 99);
    print_listint(head);

    printf("-----------------\n");

    insert_nodeint_at_index(&head, 7, 97);
    print_listint(head);

    free_listint(head);

    return (0);
}
