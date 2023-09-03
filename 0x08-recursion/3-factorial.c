#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* Error case: negative input */
	}

	if (n == 0 || n == 1)
	{
		return (1); /* Base cases: factorial of 0 and 1 is 1 */
	}

	return (n * factorial(n - 1)); /* Recursive calculation of factorial */
}
