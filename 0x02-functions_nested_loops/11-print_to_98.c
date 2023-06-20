#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all numbers from a given integer up to 98
 * @n: The starting number
 *
 * Description: This function takes an integer as input and prints all the
 * numbers from that integer up to 98, inclusive. If the given number is
 * greater than or equal to 98, it will count down to 98.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
