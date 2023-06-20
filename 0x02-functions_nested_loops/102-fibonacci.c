#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, fib;
	char fib_str[20];

	printf("%lu, %lu", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;

		sprintf(fib_str, "%lu", fib);
		printf(", %s", fib_str);
	}

	printf("\n");

	return (0);
}
