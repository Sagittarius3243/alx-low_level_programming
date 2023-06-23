#include <stdio.h>

int largest_number(int a, int b, int c);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int a, b, c;
    int largest;

    a = 972;
    b = -98;
    c = 0;

    largest = largest_number(a, b, c);

    printf("%d is the largest number\n", largest);

    return (0);
}
