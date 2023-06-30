#include <stdio.h>

/**
 * main - Prints the value of a[2] as 98.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5] = {0, 1, 2, 3, 4};
	int *p;

	p = &a[2];

	/* Add your code below this line */
	printf("a[2] = %d\n", *(p + 0));

	return (0);
}
