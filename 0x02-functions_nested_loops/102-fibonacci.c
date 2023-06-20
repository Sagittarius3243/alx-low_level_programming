#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, fib;

	_putchar('0' + fib1);
	for (i = 2; i <= 50; i++)
	{
		_putchar(',');
		_putchar(' ');
		_putchar('0' + fib2);

		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
	}

	_putchar('\n');

	return 0;
}
