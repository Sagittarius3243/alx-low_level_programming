#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;
    int res;

    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);

    print_listint(head);

    printf("-----------------\n");

    res = delete_nodeint_at_index(&head, 0);
    printf("Deleted node at index 0. Result: %d\n", res);
    print_listint(head);

    printf("-----------------\n");

    res = delete_nodeint_at_index(&head, 2);
    printf("Deleted node at index 2. Result: %d\n", res);
    print_listint(head);

    printf("-----------------\n");

    res = delete_nodeint_at_index(&head, 10);
    printf("Deleted node at index 10. Result: %d\n", res);
    print_listint(head);

    free_listint(head);

    return (0);
}
