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
	_putchar(',');
	_putchar(' ');
	_putchar('0' + fib2);

	for (i = 3; i <= 50; i++)
	{
		fib = fib1 + fib2;
		_putchar(',');
		_putchar(' ');
		if (fib > 9)
			_putchar('0' + (fib / 10));
		_putchar('0' + (fib % 10));
		fib1 = fib2;
		fib2 = fib;
	}

	_putchar('\n');

	return 0;
}
