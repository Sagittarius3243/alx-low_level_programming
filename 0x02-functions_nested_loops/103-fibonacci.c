#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long fib1 = 1, fib2 = 2, fib, sum = 2;

	while (fib2 <= 4000000)
	{
		fib = fib1 + fib2;
		if (fib % 2 == 0)
			sum += fib;
		fib1 = fib2;
		fib2 = fib;
	}

	printf("%ld\n", sum);

	return (0);
}
