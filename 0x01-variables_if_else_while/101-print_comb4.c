#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits
 * Numbers must be separated by ", " followed by a space
 * The three digits must be different
 * Numbers should be printed in ascending order, with three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundreds;
	int tens;
	int ones;

	for (hundreds = 0; hundreds <= 7; hundreds++)
	{
		for (tens = hundreds + 1; tens <= 8; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');

				/* Print comma and space if not the last combination */
				if (hundreds != 7 || tens != 8 || ones != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
