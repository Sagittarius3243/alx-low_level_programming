/**
 * calculate_sqrt - Calculates the square root of n using recursion.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if no natural square root exists.
 */
int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n) /* Base case: square root found */
		return (guess);

	if (guess * guess > n) /* Base case: no natural square root */
		return (-1);

	return (calculate_sqrt(n, guess + 1)); /* Recursive call */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n, or -1 if no natural square root exists.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Error case: negative number */
		return (-1);

	return (calculate_sqrt(n, 1));
}
