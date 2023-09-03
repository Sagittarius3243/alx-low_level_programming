#include "main.h"

/**
 * check_sqrt - Helper function to calculate the square root recursively.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 *         square root.
 */
int check_sqrt(int n, int guess)
{
	int square;

	if (guess < 0)
	{
		return (-1); /* n does not have a natural square root */
	}

	square = guess * guess;

	if (square == n)
	{
		return (guess); /* Found the natural square root */
	}

	if (square > n)
	{
		return (-1); /* n does not have a natural square root */
	}

	return (check_sqrt(n, guess + 1)); /* Try the next guess */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 *         square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Negative number does not have a natural square root */
	}

	return (check_sqrt(n, 0)); /* Start with a guess of 0 */
}
