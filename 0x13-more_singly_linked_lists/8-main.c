#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;
    int sum;

    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);

    sum = sum_listint(head);
    printf("Sum: %d\n", sum);

    free_listint(head);

    return (0);
}
