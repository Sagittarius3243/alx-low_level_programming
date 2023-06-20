#include "main.h"
/**
 * compute_sum - Computes the sum of multiples of 3 or 5 below 1024
 *
 * Return: The sum of the multiples
 */
int compute_sum(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return sum;
}
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = compute_sum();

	_putchar(sum / 1000 + '0');
	_putchar((sum / 100) % 10 + '0');
	_putchar((sum / 10) % 10 + '0');
	_putchar(sum % 10 + '0');
	_putchar('\n');

	return 0;
}
