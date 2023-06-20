#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Starting number
 *
 * Description: This function prints all natural numbers from n to 98,
 * separated by commas and followed by a new line.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
